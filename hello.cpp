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
// Search an array for an element
// #include <iostream>
// int searchArray(int array[],int size,int element);
// int main(){
//     int numbers[] = {1, 2, 3, 4, 5,6,7,8,9,10};
//     int size = sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int myNum;

//     std::cout <<"Enter the search element:" <<'\n';
//     std::cin >> myNum;
//     index = searchArray(numbers, size, myNum);
//     if(index != -1){
//         std::cout<< myNum <<" is at index " << index;
//     }
//     else{
//         std::cout<< myNum <<" is not in array";
//     }
//     return 0;
// }
// int searchArray(int array[],int size,int element){
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == element)
//         {
//             return i;
//         }

//     }
//     return -1;
// }
// Sort an array
// #include <iostream>
// void sort(int array[],int size);
// int main(){
//     int array[] = {64, 34, 25, 12, 22, 10 , 1 , 6};
//     int size = sizeof(array)/sizeof(array[0]);
//     sort(array, size);
//     for (int element : array)
//     {
//         std::cout << element << " ";
//     }

//     return 0;
// }
// void sort(int array[],int size){
//     int temp;
//     for (int i = 0; i < size -1 ;i++){
//         for (int j = 0; j < size - i - 1; j++){
//             if (array[j] > array[j+1])
//             {
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }

//     }
// }
// }

// Fill() function
// #include <iostream>
// int main()
// {
//     const int size = 150;
//     std::string foods[size];
//     fill(foods, foods + (size / 2), "Raktim");
//     fill(foods + (size / 2), foods + size, "Biswas");

//     for (std::string items : foods)
//     {
//         std::cout << items << '\n';
//     }

//     return 0;
// }

// Input data in array
//  #include <iostream>
//  #include <string>
//  int main(){
//      std::string items[5];
//      int size = sizeof(items)/sizeof(items[0]);
//       std::cin.ignore();
//      for (int i = 0; i < size; i++)
//      {
//          std::cout<<"Enter a item " << i+1 <<" : ";
//          std::getline(std::cin,items[i]);
//      }
//      std::cout<<"Your items are:\n";
//      for(std::string item : items){
//          std::cout<<item<<'\n';
//      }
//      return 0;
//  }
// 2D array
#include <iostream>
int main()
{
    std::string foods[][3] = {{"India", "Garlic nan", "Butter chicken"},
                              {"Japan", "Sushi", "Ramen"},
                              {"USA", "KFC", "MC"}};
    // std::cout<< foods[0][0]<<" ";
    // std::cout<< foods[0][1]<<" ";
    // std::cout<< foods[0][2]<<" \n";
    // std::cout<< foods[1][0]<<" ";
    // std::cout<< foods[1][1]<<" ";
    // std::cout<< foods[1][2]<<" \n";
    // std::cout<< foods[2][0]<<" ";
    // std::cout<< foods[2][1]<<" ";
    // std::cout<< foods[2][2]<<" \n";
    int rows = sizeof(foods) / sizeof(foods[0]);
    int columns = sizeof(foods[0]) / sizeof(foods[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << foods[i][j] << "           ";
        }
        std::cout << "\n";
    }
    return 0;
}