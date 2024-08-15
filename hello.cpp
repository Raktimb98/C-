#include <iostream>
std::string concatString(std::string firstname, std::string lastname);
int main(){
    std::string firstname = "Raktim";
    std::string lastname = "Biswas";
    std::string full_name = concatString(firstname, lastname);
    std::cout << full_name;
    return 0;
}
std::string concatString(std::string firstname, std::string lastname){
    return firstname + " " + lastname;
}