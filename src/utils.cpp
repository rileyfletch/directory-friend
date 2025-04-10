#include <iostream>

#include "utils.hh"

/* 
General helper functions for ease.
*/

void println(const std::string str) {
    std::cout << str << std::endl;
}

int strlen(char *buf) {
    if(*buf == '\0' || *buf == 0) return -1;

    int n = 0;
    char *s = buf;

    while(*s != '\0') {
        s++;
        n++;
    }
    
    return n;
}

/*
System helper functions.
*/

void print_user_path() {
    if (const char* env_p = std::getenv("PATH"))
        std::cout << "Your PATH is: " << env_p << '\n';
}