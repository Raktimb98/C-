#include <iostream>
void roll();
void roll(std::string variety);
int main(){
    roll("Egg");
}
void roll(){
    std::cout <<"Here is your roll!";
}
void roll(std::string variety){
    std::cout << "Here is your roll of " << variety << "!";
}