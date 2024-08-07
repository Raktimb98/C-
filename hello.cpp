#include <iostream>
namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
int main()
{
    const double PI = 3.14159;
    double radius = 5.0;
    double area = PI * radius * radius;
    std::cout << "The area of the circle is " << area << std::endl;
    return 0;
}