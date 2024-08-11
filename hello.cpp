#include <iostream>

int main() {
    double temp;
    char unit;
    double result;

    std::cout << "Enter the unit (c for Celsius, f for Fahrenheit): ";
    std::cin >> unit;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (unit == 'c') {
        result = (9.0 / 5) * temp + 32;
        std::cout << "The temperature in Fahrenheit is: " << result << std::endl;
    } else if (unit == 'f') {
        result = (5.0 / 9) * (temp - 32);
        std::cout << "The temperature in Celsius is: " << result << std::endl;
    } else {
        std::cout << "Invalid unit entered." << std::endl;
    }

    return 0;
}
