#include <iostream>
#include <vector>

void print_menu(std::string name);
void print_list();
void add_item();
void delete_item();

std::vector<std::string> list;
std::string name;

int main(int arg, char* args[]) {
    if (arg > 1) {
        name = std::string(args[1]);
        print_menu(name);
    } else {
        std::cout << "Username not supplied.. exiting the program" << std::endl;
    }

    return 0;
}

void print_menu(std::string name) {
    int choice;

    std::cout << "******************\n";
    std::cout << "1 - Print list\n";
    std::cout << "2 - Add to list\n";
    std::cout << "3 - Delete from list\n";
    std::cout << "4 - Quit\n";
    std::cout << "Enter your choice and press return/enter : ";

    std::cin >> choice;
    if (choice == 4) {
        exit(0);
    } else if (choice == 3) {
        delete_item();
    } else if (choice == 2) {
        add_item();
    } else if (choice == 1) {
        print_list();
    } else {
        std::cout << "Sorry choice hasn't been implemented.\n";
    }
}

void add_item() {
    std::cout << "\n\n";
    std::cout << "******** Add Item ********\n";
    std::cout << "Type in an item and press enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);
    std::cout << "Successfully added an item to the list\n\n";
    std::cin.clear();

    print_menu(name);
}

void delete_item() {
    std::cout << "******** Delete Item ********\n";
    std::cout << "Select an item index number to delete\n";
    
    if (list.size()) {
        for (int i=0; i<int(list.size()); i++) {
            std::cout << i << ": " << list[i] << std::endl;
        }
    } else {
        std::cout << "No items in the list or to delete" << std::endl;
    }

    print_menu(name);
}

void print_list() {
    std::cout << "\n\n";
    std::cout << "******** Printing List ********\n";
    
    for (int list_index=0; list_index<int(list.size()); list_index++) {
        std::cout << " * " << list[list_index] << std::endl;
    }

    std::cout << "M - Menu\n";
    char choice;
    std::cin >> choice;

    if (choice == 'M' || choice == 'm') {
        print_menu(name);
    } else {
        std::cout << "Invalid choice. Quiting..\n";
    }

}