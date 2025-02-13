#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float price;
    char grade;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the price of an item: ";
    cin >> price;
    cout << "Enter your grade: ";
    cin >> grade;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price of the item: $" << price << endl;
    cout << "Grade: " << grade << endl;

    return 0;

}