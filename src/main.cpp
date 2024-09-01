#include <iostream>
#include <vector>
#include "include/list.h"
#include "include/database.h"


int main(int arg, char* args[]) {
    List simpleList;
    Database data;

    if( arg > 1 ) {
        simpleList.name = string(args[1]);
        simpleList.mainList = data.read();
        simpleList.find_userList();
        simpleList.print_menu();
        data.write(simpleList.mainList);
    } else {
        std::cout << "Username not supplied.. exiting the program" << std::endl;
    }

    return 0;
}