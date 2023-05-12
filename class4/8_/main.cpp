#include <iostream>
#include <stdexcept>
#include "Employee.h"
#include "ProductionWorker.h"

int main() {
    try {
        // This should succeed
        ProductionWorker worker1("Binh", 1234, "29/05/2023", 1, 15.0);
        std::cout << "Successfully created ProductionWorker object: " << worker1.get_name() << std::endl;

        // This should fail due to an invalid shift
        ProductionWorker worker2("Tai", 5678, "01/07/2023", 3, 20.0);
        std::cout << "Successfully created ProductionWorker object: " << worker2.get_name() << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "Failed to create ProductionWorker object: " << e.what() << std::endl;
    }

    try {
        // This should fail due to an invalid employee number
        ProductionWorker worker3("Tan", 10000, "03/06/2023", 2, 25.0);
        std::cout << "Successfully created ProductionWorker object: " << worker3.get_name() << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "Failed to create ProductionWorker object: " << e.what() << std::endl;
    }

    try {
        // This should fail due to a negative hourly pay rate
        ProductionWorker worker4("Alice Doe", 9999, "04/04/2022", 1, -10.0);
        std::cout << "Successfully created ProductionWorker object: " << worker4.get_name() << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "Failed to create ProductionWorker object: " << e.what() << std::endl;
    }

    return 0;
}