#include <iostream>
#include <vector>

class List {
    private:
    // only the class itself
    protected:
    // inherits or belongs to class
    public:
        // anything including the class
        List() {}
        ~List() {}

        std::vector<std::string> list;
        std::string name;   
        
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};