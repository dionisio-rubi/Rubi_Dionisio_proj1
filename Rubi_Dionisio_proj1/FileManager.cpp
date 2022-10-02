#include "FileManager.h"
#include <sstream>

// This function reads the file and calls the necessary classes to perform their duties.
void FileManager::readFile(std::string fileName){
    std::ifstream file;
    file.open(fileName);
    std::string line;
    if(file.is_open()){ // If the file is open, then read the file.
        while(std::getline(file, line)){
            std::istringstream ss(line);
            // The operands are converted to decimal form which will make it easier to perform the operations.
            ss >> oper >> std::hex >> operand1 >> std::hex >> operand2; // The appropriate variables are assigned to the appropriate values.
            if(oper == "ADD"){ // checks the operation and uses the appropriate class to perform the operation.
                AddingHex add(oper, operand1, operand2);
                add.addHex();
                add.getResult();
            }
        }
    }
    file.close(); // close the file.
}

// Returns the first operand.
uint32_t FileManager::getOperand1(){
    return operand1;
}

// Returns the second operand.
uint32_t FileManager::getOperand2(){
    return operand2;
}

// Returns the keyword.
std::string FileManager::getOper(){
    return oper;
}