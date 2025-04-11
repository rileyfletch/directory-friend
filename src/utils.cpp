#include <iostream>
#include <chrono>
#include <ctime>

#include "utils.hh"

/* 
    General helper functions
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
    System helper functions
*/

void print_user_path() {
    if (const char* env_p = std::getenv("PATH"))
        std::cout << "Your PATH is: " << env_p << '\n';
}

std::string get_root_path() {
    if (const char* rp = std::getenv("HOME")) 
        return std::string (rp);
    return nullptr;
}

void display_time_t(std::time_t t) {
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";
}