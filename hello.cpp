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
// #include <iostream>
// double getTotal(double prices[], int size);
// int main()
// {
//     double prices[] = {8.9, 40, 48.6, 543.4, 54.8};
//     int size = sizeof(prices) / sizeof(double);
//     double total = getTotal(prices, size);
//     std::cout << total;
//     return 0;
// }
// double getTotal(double prices[], int size)
// {
//     double total = 0;
//     for (int i = 0; i < size; i++)
//     {
//         total += prices[i];
//     }
//     return total;
// }
//Search an array for an element
#include <iostream>
int searchArray(int array[],int size,int element);
int main(){
    int numbers[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout <<"Enter the search element:" <<'\n';
    std::cin >> myNum;
    index = searchArray(numbers, size, myNum);
    if(index != -1){
        std::cout<< myNum <<" is at index " << index;
    }
    else{
        std::cout<< myNum <<" is not in array";
    }
    return 0;
}
int searchArray(int array[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
        
    }
    return -1;
}