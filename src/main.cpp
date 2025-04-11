#include <cstring>
#include <iostream>

#include "utils.hh"
#include "parser.hh"
#include "manage.hh"

int main(int argc, char *argv[]) {

    if(argc < 2) {
        std::cout << "Usage: " << std::endl;
        return EXIT_SUCCESS;
    }

    arg_parser(argv);

    init_root_dir();

    return EXIT_SUCCESS;
}