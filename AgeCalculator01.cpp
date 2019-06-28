#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main() {
    while(true) {
        bool looping = true;
        int current_year, born, age_year;
        string name;
        char birthday, program_continue;

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
                cout << "\nYou are " << age_year << " years old.\n\n";
                sleep(1);
                cout <<"Happy belated birthday, " << name << "!\n\n";
                break;
            case 'n':
                cout << "\nYou will turn " << age_year << " years old this year.\n\n";
                sleep(1);
                cout << "Happy early birthday, " << name << "!\n\n";
                break;
            default:
                sleep(1);
                cout << "\nSorry, what? \n\nExiting program because " << name << " can't follow simple directions. \nSmh humans...\n\n";
        }

        sleep(1);
        cout << "Would you like to continue? (y/n) ";
        cin >> program_continue;

        switch (program_continue) 
        {
            case 'n':
                cout << "\nThank you for participating, " << name << "!\n\n";
                sleep(1);
                break;
            default:
                continue;
        }
        
        looping = false;
        break;
    }
}