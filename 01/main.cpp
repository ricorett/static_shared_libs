#include "library.h"

int main(){
    std::string str_greet;
    std::cout << "Введите имя: ";
    std::cin >> str_greet;
    Greeter gr;
    std::cout << gr.greet(str_greet);

}