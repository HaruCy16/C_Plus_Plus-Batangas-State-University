#include <iostream>
using namespace std;

int main(){
    int yourNumber;
    int divisibleNumber;

    cout << "Enter your number: ";
    cin >> yourNumber;
    cout << "Enter the number you want to check its divisibility: ";
    cin >> divisibleNumber;

    while(yourNumber >= divisibleNumber){
        cout << yourNumber << endl;
        yourNumber--;
    }
    return 0;  
}