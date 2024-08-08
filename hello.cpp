#include <iostream>
#include <string>
#include <cmath>
// #include <vector>
// typedef std::string text_t;
// using text_t = std::string;
int main()
{
    // using std ::cout;
    // using std ::string;
    // string name = " Raktim";
    // cout << "hello" << name;
    // text_t name = "raktim";
    // std::cout << name;
    // return 0;
    // int students = 10;
    // students+=1;
    // std::cout << students;
    // double x =  3.1415;
    // int correct = 8;
    // int questions =10;
    // double score = correct/(double)questions * 100;
    // std::cout << score <<"%";
    // another
    // std::string name;
    // std::cout << "What's your full name ?:";
    // std::getline(std::cin >>std::ws,name);
    // int age;
    // std::cout << "What is your age:";
    // std::cin >> age;
    // std::cin.ignore();
    // std::cout << "Hello " << name << '\n';
    // std::cout << "you are " << age << " years old";
    // Hypotenuse
    double a, b, c;
    std::cout << "Enter the first number:";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Your answer is:" << c;
}