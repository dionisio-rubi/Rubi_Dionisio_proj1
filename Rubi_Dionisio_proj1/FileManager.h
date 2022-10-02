#include <string>
#include <iostream>
#include <fstream>
#include "AddingHex.h"

class FileManager {
    private:
        int operand1;
        int operand2;
        std::string oper;
    public:
        void readFile(std::string fileName);
        int getOperand1();
        int getOperand2();
        std::string getOper();
};