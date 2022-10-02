#include <iostream>
#include <string>

class AddingHex {
    private:
        std::string keyword;
        int hex1;
        int hex2;
        int result;

    public:
        AddingHex(std::string newKeyword, int newHex1, int newHex2);
        void addHex();
        std::string getResult();
        ~AddingHex();
};