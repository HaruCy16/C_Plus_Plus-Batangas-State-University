#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 17) {
        cout << name << " You are a minor";
    } else if (age >= 17 && age < 60) {
        cout << name << " You are an adult";
    } else {
        cout << name << " You are a senior citizen";
    }
}