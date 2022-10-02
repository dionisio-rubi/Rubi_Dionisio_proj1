#include <iostream>
#include "FileManager.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    FileManager addHEX;
    addHEX.readFile("Programming-Project-1.txt");
    return 0;
};