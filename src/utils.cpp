#include "utils.hh"

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