#include <iostream>
#include <string>
int main() {
    int rows,columns;
    char symbol;
    std::cout << "How many rows do you want? :";
    std::cin >> rows;
    std::cout << "How many columns do you want? :";
    std::cin >> columns;
    std::cout << "Enter a symbol:";
    std::cin >> symbol;

    for(int i=1; i<=rows;i++){
        for(int j=1; j<=columns;j++){
            std::cout << symbol;
        }
        std::cout<<'\n';
    }

    return 0;
}
