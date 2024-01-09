#include <iostream>

int main() {
    int kilowatts;
    double totalCost = 0.0;

    // Input the kilowatts
    std::cout << "Enter the number of kilowatts: ";
    std::cin >> kilowatts;

    // Calculate the electric bill based on ranges
    if (kilowatts >= 1 && kilowatts <= 99) {
        totalCost = kilowatts * 10.00;
    } else if (kilowatts >= 100 && kilowatts <= 249) {
        totalCost = 99 * 10.00 + (kilowatts - 99) * 50.00;
    } else if (kilowatts >= 250) {
        totalCost = 99 * 10.00 + 150 * 50.00 + (kilowatts - 249) * 100.00;
    } else {
        std::cout << "Invalid input for kilowatts." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Output the result
    std::cout << "The electric bill is: $" << totalCost << std::endl;

    return 0;
}

