#include "library.h"

std::string Greeter::greet(std::string str_greet){
    str_greet = "Здравствуйте, " + str_greet;
    return str_greet;
}