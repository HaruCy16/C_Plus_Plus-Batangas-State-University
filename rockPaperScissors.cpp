#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    //string rock, paper, scissors;
    //cin rock, paper, scissors;
    //if rock == rock then print tie
    //if rock == paper then print paper wins
    //if rock == scissors then print rock wins
    //if paper == rock then print paper wins
    //if paper == paper then print tie
    //if paper == scissors then print scissors wins
    //if scissors == rock then print rock wins
    //if scissors == paper then print scissors wins
    //if scissors == scissors then print tie
    //rand( paper, rock, scissors);
    //string computerMove = rand() % paper, rock, scissors;

    srand(time(0));

    string rock = "rock";
    string paper = "paper";
    string scissors = "scissors";
    string computerMove;
    string userMove;

    cout << "Enter your move (rock, paper, or scissors): ";
    cin >> userMove;

    int randomMove = rand() % 3 + 1;
    if (randomMove == 1) {
        computerMove = rock;
        }
    else if (randomMove == 2) {
        computerMove = paper;
        }
    else {
        computerMove = scissors;
        }
    
    //user move vs computer move
    if (userMove == computerMove) {
        cout << "It's a tie! You both chose " << userMove << endl;
    } else if (userMove == computerMove) {
        cout << "You chose " << userMove << " and the computer chose " << computerMove << ". It's a tie!" << endl;
    } else if (userMove == rock) {
        if (computerMove == paper) {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Paper wins!" << endl;
        } else {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Rock wins!" << endl;
        }
    } else if (userMove == paper) {
        if (computerMove == rock) {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Paper wins!" << endl;
        } else {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Scissors wins!" << endl;
        }
    } else if (userMove == scissors) {
        if (computerMove == rock) {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Rock wins!" << endl;
        } else {
            cout << "You chose " << userMove << " and the computer chose " << computerMove << ". Scissors wins!" << endl;
        }
    } else {
        cout << "Invalid move. Please enter rock, paper, or scissors." << endl;
    }
    return 0;
}