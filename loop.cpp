#include <iostream>
using namespace std;

int main(){
    int num, remainder;

    cout << "Type a number: ";
    cin >> num;

    while(num >= 2) {
        remainder = num % 2;
        if (remainder == 0) {
            cout << num << "\n";
        }
         num--;
    }
    return 0;
}