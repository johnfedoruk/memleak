#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char* argv[]) {
    std::cout << "How many GB would you like to make?" << std::endl;
    std::string size_string;
    std::cin >> size_string;
    std::stringstream size_stream(size_string);
    unsigned int size_int = 0;
    size_stream >> size_int;
    if( size_int < 1 || size_int > 4 ) {
        std::cout << "Please specify an integer between 1 and 4" << std::endl;
        return 1;
    }
    return 0;
}