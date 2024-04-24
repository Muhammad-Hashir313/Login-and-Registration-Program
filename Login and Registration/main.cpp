#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "UserManager.h"
using namespace std;

int main() {
    UserManager usermanager;
    char choice;
    string username, password;
    do {
        system("cls");
        cout << "1. Register User\n";
        cout << "2. Login User\n";
        cout << "3. Show User List\n";
        cout << "4. Search User\n";
        cout << "5. Delete User\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case '1':
            usermanager.registerUser();
            system("pause");
            break;

        case '2':
            cout << "\n========== LOGIN ==========\n";
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            usermanager.loginUser(username, password);
            system("pause");
            break;

        case '3':
            usermanager.showUserList();
            system("pause");
            break;

        case '4':
            cout << "\n========== SEARCH USER ==========\n";
            cout << "Enter username: ";
            cin >> username;

            usermanager.searchUser(username);
            system("pause");
            break;

        case '5':
            cout << "\n========== DELETE USER ==========\n";
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            usermanager.deleteUser(username, password);
            system("pause");
            break;

        case '6':
            cout << "See you next time :)\n";
            exit(1);

        default:
            cout << "Invalid Choice....\n";
        }
    } while (true);

    return 0;
}