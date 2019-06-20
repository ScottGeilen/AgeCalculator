#include <iostream>
using namespace std;

int main() {
    int current_year, born, age;
    cout << "\nWhat year is it currently? ";
    cin >> current_year;
    cout << "\nWhat year were you born? ";
    cin >> born;
    age = current_year - born;
    cout << "\nYou are " << age << " years old!" << endl;
}