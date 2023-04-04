#include <iostream>

class FuelGauge {
    private:
        int gallons;
    public:
        FuelGauge() : gallons(0) {}
        
        int getGallons() const { return gallons; }
        
        void incrementGallons() {
            if (gallons < 15) {
                gallons++;
            }
        }
        
        void decrementGallons() {
            if (gallons > 0) {
                gallons--;
            }
        }
};

class Odometer {
    private:
        int mileage;
        FuelGauge* fuelGauge;
    public:
        Odometer(FuelGauge* fuelGauge) : mileage(0), fuelGauge(fuelGauge) {}
        
        int getMileage() const { return mileage; }
        
        void incrementMileage() {
            mileage++;
            if (mileage > 999999) {
                mileage = 0;
            }
            if (mileage % 24 == 0) {
                fuelGauge->decrementGallons();
            }
        }
};

int main() {
    FuelGauge fuelGauge;
    Odometer odometer(&fuelGauge);
    
    // Fill up the car with fuel
    for (int i = 0; i < 15; i++) {
        fuelGauge.incrementGallons();
    }
    
    // Drive the car until it runs out of fuel
    while (fuelGauge.getGallons() > 0) {
        // Increment the odometer and print the car's current mileage and amount of fuel
        odometer.incrementMileage();
        std::cout << "Mileage: " << odometer.getMileage() << " miles, ";
        std::cout << "Fuel: " << fuelGauge.getGallons() << " gallons" << std::endl;
    }
    
    std::cout << "The car is out of fuel!" << std::endl;
    
    return 0;
}