#include <iostream>
using namespace std;

enum difficulty {EASY, MEDIUM, HARD};

int main() {
    int userInput;
    
    cout << "Enter difficulty (0 = EASY, 1 = MEDIUM, 2 = HARD): ";
    cin >> userInput;

    // Ensure valid input
    if (userInput < 0 || userInput > 2) {
        cout << "Invalid difficulty level!" << endl;
        return 1; // Exit with error
    }

    // Convert input to enum
    difficulty myVar = static_cast<difficulty>(userInput);

    // Switch statement with correct enum values
    switch (myVar) {
        case EASY:
            cout << "Low Level" << endl;
            break;
        case MEDIUM:
            cout << "Medium Level" << endl;
            break;
        case HARD:
            cout << "High Level" << endl;
            break;
    }

    return 0;
}
