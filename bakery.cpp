
/*
 * Copyright 2026 Vova M
 * Bakery Croissant Calculator
 */

#include <iostream>
#include <iomanip>

int main() {
    // Display welcome message
    std::cout << "============================================================"
              << std::endl;
    std::cout << "Welcome to the Bakery Croissant Calculator!"
              << std::endl;
    std::cout << "============================================================"
              << std::endl;

    std::cout << "Each croissant costs $2.55" << std::endl;
    std::cout << "HST is 13% if you buy fewer than 6 croissants."
              << std::endl;

    // Get input from the user
    double quantity;
    std::cout << "How many croissants do you want? ";
    std::cin >> quantity;

    // Set prices
    double price = 2.55;
    double tax_rate = 0.13;

    // Check if the input is valid
    if (quantity <= 0) {
        std::cout << "Please enter a positive number." << std::endl;
    } else {
        // Calculate subtotal
        double subtotal = quantity * price;

        // Check if HST is needed
        double tax;

        if (quantity < 6) {
            tax = subtotal * tax_rate;
        } else {
            tax = 0;
        }

        // Calculate total
        double total = subtotal + tax;

        // Display results
        std::cout << std::fixed << std::setprecision(2);

        std::cout << "--------------------------------" << std::endl;
        std::cout << "Subtotal: $ " << subtotal << std::endl;
        std::cout << "Tax: $ " << tax << std::endl;
        std::cout << "Total cost: $ " << total << std::endl;
        std::cout << "--------------------------------" << std::endl;
    }
    return 0;
}
