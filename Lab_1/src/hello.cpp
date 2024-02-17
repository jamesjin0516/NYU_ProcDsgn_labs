#include <iostream>
#include "name.hpp"

int main() {
    std::cout << "Please enter your name: ";
    std::string name = requestNameStdIn();
    std::cout << "Hello, " << name << std::endl;
}