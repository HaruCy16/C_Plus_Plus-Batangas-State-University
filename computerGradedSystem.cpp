#include <iostream>
using namespace std;

int main(){
    string name;
    int studentId;
    double quiz1, quiz2, quiz3;
    double average; 
    const int NUM_QUIZZES = 3;
    int averageScore;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your student ID: ";
    cin >> studentId;
    cout << "Enter your quiz 1 score: ";
    cin >> quiz1;
    cout << "Enter your quiz 2 score: ";
    cin >> quiz2;
    cout << "Enter your quiz 3 score: ";
    cin >> quiz3;
    
    average = (quiz1 + quiz2 + quiz3) / NUM_QUIZZES;
    averageScore = (int)average;

    cout << "Your name is: " << name << endl;
    cout << "Your student ID is: " << studentId << endl;
    cout << "Your average quiz score is: " << averageScore << endl;

    return 0;
}