#include <iostream>
#include <vector>
#include <fstream>

class Database {
    private:
    protected:
    public:
        Database() {}
        ~Database() {}

        std::vector<std::string> list;
        std::string name;

        void write(std::vector<std::string> list);
        void read();
};