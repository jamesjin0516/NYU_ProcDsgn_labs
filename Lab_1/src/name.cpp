#include <iostream>
#include <string>
#include "name.hpp"


std::string requestNameStdIn() {
    std::string name;
    std::cin >> name;
    return name;
}