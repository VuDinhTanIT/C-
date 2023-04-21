#include <iostream>
#include <string>
using namespace std;

class Ship {
private:
    string name;
    string yearBuilt;

public:
    // Constructors
    Ship() {}
    Ship(string n, string y) : name(n), yearBuilt(y) {}

    // Accessor functions
    string getName() const { return name; }
    string getYearBuilt() const { return yearBuilt; }

    // Mutator functions
    void setName(string n) { name = n; }
    void setYearBuilt(string y) { yearBuilt = y; }

    // Virtual print function
    virtual void print() const {
        cout << "Ship name: " << name << "\n"
             << "Year built: " << yearBuilt << "\n";
    }
};

class CruiseShip : public Ship {
private:
    int maxPassengers;

public:
    // Constructors
    CruiseShip() {}
    CruiseShip(string n, string y, int m) : Ship(n, y), maxPassengers(m) {}

    // Accessor functions
    int getMaxPassengers() const { return maxPassengers; }

    // Mutator functions
    void setMaxPassengers(int m) { maxPassengers = m; }

    // Override print function
    void print() const override {
        cout << "Ship name: " << getName() << "\n"
             << "Maximum passengers: " << maxPassengers << "\n";
    }
};

class CargoShip : public Ship {
private:
    int cargoCapacity;

public:
    // Constructors
    CargoShip() {}
    CargoShip(string n, string y, int c) : Ship(n, y), cargoCapacity(c) {}

    // Accessor functions
    int getCargoCapacity() const { return cargoCapacity; }

    // Mutator functions
    void setCargoCapacity(int c) { cargoCapacity = c; }

    // Override print function
    void print() const override {
        cout << "Ship name: " << getName() << "\n"
             << "Cargo capacity: " << cargoCapacity << " tons\n";
    }
};

int main() {
    const int NUM_SHIPS = 3;
    Ship* ships[NUM_SHIPS];

    ships[0] = new Ship("Ship 1", "1990");
    ships[1] = new CruiseShip("Ship 2", "2000", 1000);
    ships[2] = new CargoShip("Ship 3", "2010", 50000);

    for (int i = 0; i < NUM_SHIPS; i++) {
        ships[i]->print();
        cout << "\n";
    }

    for (int i = 0; i < NUM_SHIPS; i++) {
        delete ships[i];
    }
    delete [] ships;

    return 0;
}