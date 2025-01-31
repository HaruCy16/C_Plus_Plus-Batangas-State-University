#include <iostream>

using namespace std;

int main() {
    string op;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;

    if (op == "+") {
        cout << "Result: " << num1 + num2;
    } else if (op == "-") {
        cout << "Result: " << num1 - num2;
    } else if (op == "*") {
        cout << "Result: " << num1 * num2;
    } else if (op == "/") {
        if (num2 != 0) {
            cout << "Result: " << static_cast<double>(num1) / num2;
        } else {
            cout << "Error: Division by zero";
        }
    } else {
        cout << "Error: Invalid operator";
    }
}