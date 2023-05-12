#include <iostream>
#include <vector>

int main() {
    std::vector<double> rainfall(12);

    // Input monthly rainfall amounts
    for (int i = 0; i < 12; i++) {
        do {
            std::cout << "Enter rainfall for month " << i+1 << ": ";
            std::cin >> rainfall[i];
        } while (rainfall[i] < 0);
    }

    // Calculate total rainfall for the year
    double total = 0;
    for (int i = 0; i < 12; i++) {
        total += rainfall[i];
    }

    // Calculate average monthly rainfall
    double average = total / 12;

    // Find the month with the highest rainfall
    int maxIndex = 0;
    for (int i = 1; i < 12; i++) {
        if (rainfall[i] > rainfall[maxIndex]) {
            maxIndex = i;
        }
    }

    // Find the month with the lowest rainfall
    int minIndex = 0;
    for (int i = 1; i < 12; i++) {
        if (rainfall[i] < rainfall[minIndex]) {
            minIndex = i;
        }
    }

    // Output results
    std::cout << "Total rainfall for the year: " << total << std::endl;
    std::cout << "Average monthly rainfall: " << average << std::endl;
    std::cout << "Month with the highest rainfall: " << maxIndex+1 << " (" << rainfall[maxIndex] << " inches)" << std::endl;
    std::cout << "Month with the lowest rainfall: " << minIndex+1 << " (" << rainfall[minIndex] << " inches)" << std::endl;

    return 0;
}