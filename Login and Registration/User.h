#pragma once
#include<iostream>
#include<string>
using namespace std;

class User {
private:
    string username, password;
public:
    User(string user, string pass) {
        username = user;
        password = pass;
    }

    string getUsername() { return username; }
    string getPassword() { return password; }
};