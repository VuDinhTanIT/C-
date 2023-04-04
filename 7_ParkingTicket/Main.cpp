#include <iostream>
#include <string>

class ParkedCar {
    private:
        std::string make;
        std::string model;
        std::string color;
        std::string licenseNumber;
        int minutesParked;
    public:
        ParkedCar(std::string make, std::string model, std::string color, 
                  std::string licenseNumber, int minutesParked) : 
                      make(make), model(model), color(color), 
                      licenseNumber(licenseNumber), minutesParked(minutesParked) {}
                      
        std::string getMake() const { return make; }
        std::string getModel() const { return model; }
        std::string getColor() const { return color; }
        std::string getLicenseNumber() const { return licenseNumber; }
        int getMinutesParked() const { return minutesParked; }
};

class ParkingMeter {
    private:
        int minutesPurchased;
    public:
        ParkingMeter(int minutesPurchased) : minutesPurchased(minutesPurchased) {}
        
        int getMinutesPurchased() const { return minutesPurchased; }
};

class ParkingTicket {
    private:
        std::string make;
        std::string model;
        std::string color;
        std::string licenseNumber;
        int fineAmount;
        std::string officerName;
        std::string badgeNumber;
    public:
        ParkingTicket(const ParkedCar& car, int minutesExpired, 
                      const std::string& officerName, const std::string& badgeNumber) :
                          make(car.getMake()), model(car.getModel()), color(car.getColor()), 
                          licenseNumber(car.getLicenseNumber()), officerName(officerName), 
                          badgeNumber(badgeNumber) {
            int firstHourFine = 25;
            int additionalHourFine = 10;
            int hoursExpired = (minutesExpired + 59) / 60; // Round up to the nearest hour
            fineAmount = firstHourFine + (hoursExpired - 1) * additionalHourFine;
        }
        
        std::string getMake() const { return make; }
        std::string getModel() const { return model; }
        std::string getColor() const { return color; }
        std::string getLicenseNumber() const { return licenseNumber; }
        int getFineAmount() const { return fineAmount; }
        std::string getOfficerName() const { return officerName; }
        std::string getBadgeNumber() const { return badgeNumber; }
};

class PoliceOfficer {
    private:
        std::string name;
        std::string badgeNumber;
    public:
        PoliceOfficer(std::string name, std::string badgeNumber) : 
                          name(name), badgeNumber(badgeNumber) {}
        
        ParkingTicket inspect(const ParkedCar& car, const ParkingMeter& meter) const {
            int minutesExpired = car.getMinutesParked() - meter.getMinutesPurchased();
            if (minutesExpired > 0) {
                return ParkingTicket(car, minutesExpired, name, badgeNumber);
            }
            else {
                return ParkingTicket(car, 0, "", ""); // No ticket issued
            }
        }
};

int main() {
    // Create a parked car and a parking meter
    ParkedCar car("Tesla", "Y", "Black", "abc2  ", 120);
    ParkingMeter meter(60);
    
    // Create a police officer and inspect the car and meter
    PoliceOfficer officer("Officer Smith", "12345");
    ParkingTicket ticket = officer.inspect(car, meter);
    
    // Print the ticket details
    std::cout << "Make: " << ticket.getMake() << std::endl;
    std::cout << "Model: " << ticket.getModel() << std::endl;
    std::cout << "Color: " << ticket.getColor() << std::endl;
    std::cout << "License Number: " << ticket.getLicenseNumber() << std::endl;
    std::cout << "Fine Amount: $" << ticket.getFineAmount() << std::endl;
    std::cout << "Officer Name: " << ticket.getOfficerName() << std::endl;
    std::cout << "Badge Number: " << ticket.getBadgeNumber() << std::endl;
    
    return 0;
}