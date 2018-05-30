#include <iostream>
#include <string>
#include <sstream>
#include "main.hpp"
#include "lib/wasteful.hpp"

int main(int argc, char* argv[]) {
    std::cout << "How many GB would you like to make?" << std::endl;
    std::string size_string;
    std::cin >> size_string;
    std::stringstream size_stream(size_string);
    unsigned int size_int = 0;
    size_stream >> size_int;
    if( size_int < MIN_GB_WASTE || size_int > MAX_GB_WASTE ) {
        std::cout << "Please specify an integer between "  << MIN_GB_WASTE << " and " << MAX_GB_WASTE << std::endl;
        return 1;
    }
    Wasteful* waste = new Wasteful(size_int);
    waste->makeWaste();
    pause();
    return 0;
}

void pause(void) {
    std::cout << '\n' << "Press a key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
}