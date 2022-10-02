#include "AddingHex.h"

AddingHex::AddingHex(std::string newKeyword, int newHex1, int newHex2){
    keyword = newKeyword;
    hex1 = newHex1;
    hex2 = newHex2;
}

void AddingHex::addHex(){
    result = hex1 + hex2;
}

std::string AddingHex::getResult(){
    return keyword + " " + std::to_string(hex1) + " " + std::to_string(hex2) + " RESULT: " + std::to_string(result);
}

AddingHex::~AddingHex() = default;