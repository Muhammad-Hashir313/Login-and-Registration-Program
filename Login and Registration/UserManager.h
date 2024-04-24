#pragma once
#include<iostream>
#include<string>
using namespace std;

class UserManager {
private:
    vector<User> users;
public:
    void registerUser() {
        cout << "\n========== REGISTER ==========\n";
        string username, password;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        // Registering User
        User new_user(username, password);
        users.push_back(new_user);
        cout << "User Registered Successfully!\n";
    }

    bool loginUser(string user, string pass) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == user && users[i].getPassword() == pass) {
                cout << "Login Successful!\n";
                return true;
            }
        }
        cout << "Invalid credentials!!!\n";
        return false;
    }

    void showUserList() {
        cout << "\n========== USER LIST ==========\n";
        for (int i = 0; i < users.size(); i++) {
            cout << users[i].getUsername() << endl;
        }
    }

    void searchUser(string user) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == user) {
                cout << "User Found!\n";
                return;
            }
        }
        cout << "User Not Found!\n";
    }

    void deleteUser(string user, string pass) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == user && users[i].getPassword() == pass) {
                users.erase(users.begin() + i);
                cout << "User deleted successfully\n";
                return;
            }
        }
        cout << "User does not exist or credentials are invalid!!!\n";
    }
};