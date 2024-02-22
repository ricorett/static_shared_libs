#include "library.h"

int main(){
    std::string str_greet;
    std::cout << "Введите имя: ";
    std::cin >> str_greet;
    Greeter gr;
    gr.greet(str_greet);
}