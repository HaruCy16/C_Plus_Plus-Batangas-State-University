#include <iostream>
using namespace std;

int main(){
    string firstName, middleInitial, lastName;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter middle initial: ";
    cin >> middleInitial;
    cout << "Enter last name: ";
    getline(cin, lastName);

    cout << firstName << " " << middleInitial << "" << lastName;

	return 0;
}