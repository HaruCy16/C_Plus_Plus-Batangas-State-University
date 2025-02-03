#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string name;
    string subject;

    cout << "Enter your name" << "\n";
    cin >> name;
    cout << "Enter your subject" << "\n";
    cin >> subject;
    cout << "Enter your score" << "\n";
    cin >> score;

    if (score >= 75 && score <= 100) {
        cout << "Hello " << name << " You have passed " << subject;
    } else {
        cout << "Hello " << name << " You have failed " << subject;
    }
}