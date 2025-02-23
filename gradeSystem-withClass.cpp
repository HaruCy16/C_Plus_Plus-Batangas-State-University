#include <iostream>
#include <string>
using namespace std;

// PARENT CLASS
class Values {
  protected:
    double quiz1, quiz2, quiz3, average;
    int averageScore;
};

// CHILD CLASS
class getInfos : public Values {
  private:
    string name;
    int id;
    const int NUM_QUIZZES = 3; // Constant should be `const`

  public:
    void getName() {
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your student ID: ";
        cin >> id;
        cin.ignore(); // Prevents issues with `getline` after `cin`
    }

    void getQuizScores() {
        cout << "Enter quiz 1 score: ";
        cin >> quiz1;

        cout << "Enter quiz 2 score: ";
        cin >> quiz2;

        cout << "Enter quiz 3 score: ";
        cin >> quiz3;
    }

    void getAverage() {
        average = (quiz1 + quiz2 + quiz3) / NUM_QUIZZES;
        averageScore = int (average); // Type casting using `static_cast`
    }

    void displayOutput() {
        cout << "\nYour name is: " << name << endl;
        cout << "Your student ID is: " << id << endl;
        cout << "Your average quiz score is: " << averageScore << endl;
    }
};

int main() {
    getInfos info;

    info.getName(); // No need for parameters
    info.getQuizScores();
    info.getAverage();
    info.displayOutput();

    return 0;
}
