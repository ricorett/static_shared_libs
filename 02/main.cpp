#include "Leaver.h"

int main(){
    std::string str_leave;
    std::cout << "Введите имя: ";
    std::cin >> str_leave;
    Leaver lv;
    lv.leave(str_leave);
}