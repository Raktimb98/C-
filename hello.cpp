#include<iostream>
int main(){
    std::string food[] ={"Egg chicken roll" , "Paneer tikka" ,"Garlic naan"};
    std::cout<<sizeof(food)/sizeof(std::string)<<" items";
    return 0;
}