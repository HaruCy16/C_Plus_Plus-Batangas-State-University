#include <iostream>
using namespace std;

int main() {
    string name;
    int temperature;

    cout << "State your name" << "\n";
    cin >> name;
    cout << "Enter your current temperature" << "\n";
    cin >> temperature;

    if (temperature < 15) {
        cout << "Hello " << name << " The temperature is " << temperature << " degrees, COLD";
    } else if (temperature >= 15 && temperature <= 30){
        cout << "Hello " << name << " The temperature is " << temperature << " degrees, WARM";
    } else {
        cout << "hello " << name << " The temperature is " << temperature << " degrees, HOT";
    }
}