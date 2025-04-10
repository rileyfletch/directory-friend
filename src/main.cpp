#include <cstring>
#include <iostream>

#include "utils.hh"
#include "parser.hh"

void arg_parser(char *args[]) {
    if(strcmp(args[0], "test") == 0) {
        println("valid");
    } else if(strcmp(args[0], "sec") == 0) {
        println("second");
    } else {
        println("Invalid input");
        println(args[0]);
    }
}

int main(int argc, char *argv[]) {

    if(argc < 2) {
        std::cout << "Usage: " << std::endl;
        return EXIT_SUCCESS;
    }

    arg_parser(argv);

    return EXIT_SUCCESS;
}