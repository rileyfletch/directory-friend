#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

void invoke_command(std::string cmd) {
    std::vector<std::string> cmd_args;
    std::stringstream ss(cmd);  
    std::string word;

    while (ss >> word) { 
        cmd_args.push_back(word);
    }

    for(std::string str : cmd_args) {
        std::cout << str << std::endl;
    }
}
