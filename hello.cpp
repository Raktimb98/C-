#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show balance:\n";
        std::cout << "2. Deposit money:\n";
        std::cout << "3. Withdraw money:\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;  // Move this inside the loop

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Thank you for being our customer!\n";
            break;
        default:
            std::cout << "Something went wrong\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is ₹" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter the amount that you want to deposit: ";
    std::cin >> amount;
    return amount;  // Return the amount deposited
}

double withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter the amount that you want to withdraw: ";
    std::cin >> amount;

    if(amount > balance)
    {
        std::cout << "Insufficient funds!\n";
        return 0;  // If insufficient funds, return 0
    }

    return amount;  // Return the amount withdrawn
}
