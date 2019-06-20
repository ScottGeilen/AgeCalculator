#include <iostream>
using namespace std;

int main() {
    int current_year, born, age;
    cout << "What year is it currently? ";
    cin >> current_year;
    cout << "What year were you born? ";
    cin >> born;
    age = current_year - born;
    cout << "You are " << age << " years old!" << endl;
}