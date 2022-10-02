#include "FileManager.h"

void FileManager::readFile(std::string fileName){
    std::ifstream file;
    file.open(fileName);
    if(file.is_open()){
        while(!file.eof()){
            file >> oper >> operand1 >> operand2;
            std:: cout << oper << " " << operand1 << " " << operand2 << std::endl;
            // if(oper == "ADD"){
            //     AddingHex add(oper, operand1, operand2);
            //     add.addHex();
            //     std::cout << add.getResult() << std::endl;
            // }
        }
    }
    file.close();
}

int FileManager::getOperand1(){
    return operand1;
}

int FileManager::getOperand2(){
    return operand2;
}

std::string FileManager::getOper(){
    return oper;
}