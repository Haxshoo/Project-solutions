/*
* Find PI to the Nth Digit
* Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.
*/

#include <iostream>
#include <iomanip>

int main()
{
    // No need for more than 15 decimal places.
    double piDigits = 3.141592653589793;
    int decimalPlaces;
    std::cout << "Enter number of decimal places(max 15): ";


    while (1)
    {
        std::cin >> decimalPlaces;
        if (decimalPlaces >= 0 && decimalPlaces <= 15)
        {
            break;
        }
        std::cout << "Number of decimals needs to be less than or equal to 15.\n";
        std::cout << "Enter number of decimal places(max 15): ";

    }
    
    std::cout << std::fixed << std::setprecision(decimalPlaces) << piDigits;

    return 0;

}
