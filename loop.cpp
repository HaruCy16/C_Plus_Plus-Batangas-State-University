#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Type a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even";
    } else {
        cout << "The number is odd";
    }

    /*while(num >= 2) {
        remainder = num % 2;
        if (remainder == 0) {
            cout << num << "\n";
        }
         num--;
    }*/
    return 0;
}