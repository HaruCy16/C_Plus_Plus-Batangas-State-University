#include <string>
#include <iostream>
using namespace std;

//PARENT
class Values
{
  protected:
    double quiz1, quiz2, quiz3, average;
};

//CHILD 1
class getInfos : public Values
{
  private:
    string name;
    int id;
    int NUM_QUIZZES = 3;

    public:
      void getName(string name, int studentId){
        name = name;
        id = studentId;

        cout << "Your name is: " << name << endl;
        getline(cin, name);

        cout << "Your studentId is: " << id << endl;
        cin >> id;

        // return name;
        // return id;
      }
};

int main(){
  int studentId;
  string name;
  getInfos info;

  info.getName(name, studentId);
}