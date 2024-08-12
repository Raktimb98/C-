#include <iostream>
#include <ctime>
int main() {
    srand(time(0));
    int randnum = (rand() %5)+1;
    switch (randnum)
    {
    case 1:
        std::cout << "Time to order foods";
        break;
    case 2:
        std::cout << "Time to sleep";
        break;
    case 3:
        std::cout << "Time to exercise";
        break;
    case 4:
        std::cout << "Time to relax";
        break;
    case 5:
        std::cout << "Time to study";
        break;
    default: std::cout << "Somethig went wrong";
        break;
    };
    return 0;
}