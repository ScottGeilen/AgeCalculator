#include <iostream>
using namespace std;

int main() {
    int current_year, current_month, born, born_month, age_year, age_month;
    cout << "\nWhat year is it currently? ";
    cin >> current_year;
    cout << "\nWhat month is it currently?\nAnswer using digits: ";
    cin >> current_month;
    cout << "\nWhat year were you born? ";
    cin >> born;
    cout << "\nWhat month were you born?\nAnswer using digits: ";
    cin >> born_month;
    age_year = current_year - born;
    age_month = current_month - born_month;
    cout << "\nYou are " << age_year << " years and " << age_month << " months old!" << endl;
}