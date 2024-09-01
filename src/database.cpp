#include "include/database.h"

void Database::write(std::vector<std::string> list) {
    std::ofstream db;
    db.open("db/lists.sl");
    
    if (db.is_open()) {
        for (unsigned int list_index=0; list_index < list.size(); list_index++) {
            std::cout << " * " << list[list_index] << std::endl;
        }
    } else {
        std::cout << "Cannot open file for writing." << std::endl;
    }
    
    db.close();
}

void Database::read() {
    std::string line;
    std::ifstream db;
    db.open("db/lists.sl");
    
    if (db.is_open()) {
        while (std::getline(db, line, '\n')) {
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "Cannot open file for reading." << std::endl;
    }
    
    db.close();
}