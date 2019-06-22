#include <iostream>
#include <string>
using namespace std;

int main() {
    int current_year, born, age_year;
    string name;
    char birthday;

    cout << "\nWhat is your name? ";
    cin >> name;
    cout << "\nWhat year is it currently? ";
    cin >> current_year;
    cout << "\nWhat year were you born? ";
    cin >> born;

    age_year = current_year - born;
    cout << "\nDid you already have your birthday this year, " << name << "? (y/n) ";
    cin >> birthday;
    
    switch(birthday)
    {
        case 'y':
            cout << "\nYou are " << age_year << " years old. \n\nHappy belated birthday, " << name << "!\n\n";
            break;
        case 'n':
            cout << "\nYou will turn " << age_year << " years old this year. \n\nHappy early birthday, " << name << "!\n\n";
            break;
        default:
            cout << "\nSorry, what? \n\nExiting program because " << name << " can't follow simple directions. \nSmh humans...\n\n";
    }
}
