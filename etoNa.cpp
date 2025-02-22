//QUIZ 1, 2, 3 AND AVERAGE NA NAKA DOUBLE DAPAT AY PROTECTED
//GUMAMIT NG TYPE CASTING
//CONSTANT NA NUMBER  ROF QUIZZES
//LAHAT NG ACCESS MODIFIERS

#include <iostream>
using namespace std;

//PARENT
class Value
{
  protected:
    double quiz1, quiz2, quiz3, average;
};

//CHILD 1
class getInfos : public Value
{
   private:
    string name;
    int id;
    int NUM_QUIZZES = 3;

  // public:
  //   void information(string userName, int studentId){
  //     name = userName;
  //     id = studentId;
  //   }
   public:
    void get_Info(){
      cout << "Your name is: " << endl;
      cin >> name;
      cout << "Your studentId is: " << endl;
      cin >> id;
      cout << "Score Quiz 1: " << endl;
      cin >> quiz1;
      cout << "Score Quiz 2: " << endl;
      cin >> quiz2;
      cout << "Score Quiz 3: " << endl;
      cin >> quiz3;
    }

    // private:
    // const int NUM_QUIZZES = 3;
   
  public:
    void get_Result(){
      average = (quiz1 + quiz2 + quiz3) / NUM_QUIZZES;
      average = (int)average;

      cout << "Your name is: ";
      getline(cin, name);
      cout << "Your student id is: " << id << endl;
      cout << "Your average quiz is: " << average << endl;
    }
  
    // public:
    //   void displayResult(){
    //     cout << "Your name is: " << name << endl;
    //     cout << "Your student id is: " << id << endl;
    //     cout << "Your average quiz is: " << 
    //   }

};

// //CHILD 2
// class averageSolved : public getInfos
// {
//   private:
//     const int NUM_QUIZZES = 3;
   
//   public:
//     void getAverage(){
//       average = (quiz1 + quiz2 + quiz3) / NUM_QUIZZES;

//       int averageScore;
//       averageScore = (int)average;
//     }
// };

// //CHILD 3
// class result : public averageSolved
// {
//   public:
//     void displayResult(){
//       cout << "Your student name is: " << name;

//     }
// };

// //CHILD 2
// class Solution : public getInfos
// {
//   private:
//     const int NUM_QUIZZES = 3;

//   public:
//     void setName(){
//       cout << "Enter your name" << endl;
//     }

//   public:
//     void setId(){
//       cout << "Enter your id" << endl;
//     }
// };


// MAIN FUNCTION

int main(){
  getInfos info;

  info.get_Info();
  info.get_Result();

  return 0;
};

