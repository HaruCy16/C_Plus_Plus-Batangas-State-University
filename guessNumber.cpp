#include <iostream>
using namespace std;

int main(){
    //rand() % 100 + 1; generate random number between 1 and 100
    //cin number;
    //if number > guessNumber then print too high
    //if number < guessNumber then print too low
    //if number == guessNumber then print correct

    srand(time(0));

    int guessNumber = rand() % 100 + 1;
    int number;

    while(number != guessNumber){
        cout << "Guess a number between 1 and 100: ";
        cin >> number;

        if(number > guessNumber){
            cout << "Too high" << endl;
        }else if(number < guessNumber){
            cout << "Too low" << endl;
        }else{
            cout << "Correct" << endl;
            break;
        }
    }
    
    return 0;
}