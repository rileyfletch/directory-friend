#include "utils.hh"

#include <iostream>

void arg_parser(char *arg) {
    
}

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }

    for(int i = 0; i < argc; i++) {
        std::cout << strlen(argv[i]) << std::endl; 
    }
    return 0;
}