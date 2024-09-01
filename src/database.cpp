#include "include/database.h"

void Database::write(std::vector<std::vector<std::string>> mainList) {

    std::ofstream db;
    db.open("db/lists.sl");

    if( db.is_open() ) {
        for( int user_index=0; user_index < (int)mainList.size(); user_index++ ) {
            for ( int list_index=0; list_index < (int)mainList[user_index].size(); list_index++) {
                if ( list_index == 0 ){
                    db << "#" << mainList[user_index][list_index] << "\n";
                }
                else {
                    db << mainList[user_index][list_index] << "\n";
                } 
            }
            db << "%" << "\n";
        }
    }
    else {
        std::cout << "Cannot open file for writing.\n";
    }

    db.close();

}

std::vector<std::vector<std::string>> Database::read() {
    std::string line;
    std::ifstream db;

    std::vector<std::string> userList;

    db.open("db/lists.sl");

    if ( db.is_open() ) {
        while ( getline(db,line,'\n') ) {
            if( line.front() == '#' ) {
                std::cout << "Found a Hashtag: " << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if ( line.front() == '%' ) {
                std::cout << "Found a Percentage: " << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else {
                std::cout << "Found a Item: " << line << "\n";
                userList.push_back(line);
            }
        }
    }
    else {
        std::cout << "Cannot open file for reading.\n";
    }

    db.close();

return mainList;

}