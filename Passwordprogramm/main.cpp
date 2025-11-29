#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool login(string username, string password) {
    ifstream file("user.txt");
    string u, p ;
    while (file >> u >> p) {
        if (u == username && p == password) {
            return true;
        }
        return false;
    }

}


int main() {
    string username, password;
    cout << "Enter username and password: ";
    cin >> username >> password;
    if (login(username, password)) {
        cout << "Logged in successfully!" << endl;

    }
    else {
        cout << "Logged in failed!" << endl;
    }
}

