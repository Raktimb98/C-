// #include<iostream>
// int main(){
//     std::string food[] ={"Egg chicken roll" , "Paneer tikka" ,"Garlic naan"};
//     std::cout<<sizeof(food)/sizeof(std::string)<<" items";
//     return 0;
// }
// Iterate over an array
// #include <iostream>
// int main()
// {
//     std::string food[] = {"Egg chicken roll", "Paneer tikka", "Garlic naan" , "Fried rice"};
//     for (int i = 0; i < sizeof(food) / sizeof(std::string); i++)
//     {
//         std::cout << food[i] << '\n';
//     }

//     return 0;
// }
// foreach loop
// #include <iostream>
// int main(){
//     std::string food[] = {"Egg chicken roll", "Paneer tikka", "Garlic naan" , "Fried rice"};
//     for (std::string food: food){
//         std::cout << food << '\n';
//     }
// }
// Pass array to a function
#include <iostream>
double getTotal(double prices[], int size);
int main()
{
    double prices[] = {8.9, 40, 48.6, 543.4, 54.8};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);
    std::cout << total;
    return 0;
}
double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}