#include <iostream>
#include <vector>
#include "include/list.h"


int main(int arg, char* args[]) {
    if (arg > 1) {
        List simpleList;
        simpleList.name = std::string(args[1]);
        simpleList.print_menu();
    } else {
        std::cout << "Username not supplied.. exiting the program" << std::endl;
    }

    return 0;
}