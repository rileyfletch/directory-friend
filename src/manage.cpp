#include <iostream>
#include <chrono>
#include <ctime>
#include <filesystem>

#include "utils.hh"

/*
    Base user class; saved and loaded from disk if already existent
    Used to interact with user specific encrypted secrets
*/
class User {
    public:
        User(std::string username, std::string password, bool is_admin);
        ~User();
    private:
        std::string username;
        std::string password;
        bool is_admin;
        std::time_t lla_time; /* Last login attempt */ 
        int failed_logins;
};

User::User(std::string uname, std::string pword, bool admin) {
    username = uname;
    password = pword;
    is_admin = admin;
    lla_time = std::time(0);
    failed_logins = 0;
}

User::~User() {
}

/*
    File system structure
    ---------------------
    .dirf/
        public/
        users/
            userX/
                user_data/
                user_notes/
*/

namespace fs = std::filesystem;

void init_root_dir() {
    fs::path p = fs::current_path();
    std::string root = get_root_path();
    println(root);
}