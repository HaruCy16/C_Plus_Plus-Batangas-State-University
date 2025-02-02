#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age:";
    cin >> age;

    if (age <= 17) {
        cout << "You're " << age << " years old. You are not eligible to vote.";
    } else if (age >= 18 && age <= 60) {
        cout << "You're " << age << " years old. You are eligible to vote.";
    } else {
        cout << "You're " << age << " years old. You are a senior citizen.";
    }
}