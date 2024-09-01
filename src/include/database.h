#include <iostream>
#include <vector>
#include <fstream>

class Database {
    private:
    protected:
    public:
        Database() {}
        ~Database() {}

        std::vector<std::vector<std::string>> mainList;
        std::string name;

        void write(std::vector<std::vector<std::string>> mainList);
        std::vector<std::vector<std::string>> read();
};