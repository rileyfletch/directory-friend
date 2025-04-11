#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

#include "utils.hh"
#include "manage.hh"

/* 
    Parses CLI arguments and commits various actions
*/
void arg_parser(char *args[]) {
    char *cmd = strdup(args[1]);

    if(strcmp(cmd, "test") == 0) {
        println("valid");
    } else if(strcmp(cmd, "sec") == 0) {
        println("second");
    } else {
        println("Invalid input");
        println(cmd);
    }

    free(cmd);
}