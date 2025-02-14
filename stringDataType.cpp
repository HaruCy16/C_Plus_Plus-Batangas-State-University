#include <iostream>
using namespace std;

int main() {
    string name;
    char sex;
    long int number;
    float grade;

    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your sex: " << endl; 
    cin >> sex;
    cout << "Enter your number: " << endl;
    cin >> number;
    cout << "Enter your grade: " << endl;
    cin >> grade;

    if(sex =='M'){
        cout << "Hello, " << name << ", you're a Male" << ", your grade is " << grade << "and your number is " << number; 
    } else if(sex =='F'){
        cout << "Hello, " << name << ", you're a Female" << ", your grade is " << grade << "and your number is " << number; 
    } else {
        cout << "Invalid input. Please enter 'M' for male or 'F' for female";
    }
}