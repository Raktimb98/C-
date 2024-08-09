#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**************************** Calculator ****************************\n";
    std::cout << "Enter either (+,-,*,/): ";
    std::cin >> op;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result;
            } else {
                std::cout << "Error: Division by zero!";
            }
            break;
        default:
            std::cout << "Something went wrong!";
            break;
    }

    std::cout << "\n********************************************************************";
    return 0;
}
