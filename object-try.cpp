#include <iostream>
#include <string>
using namespace std;

class Circle{
  public:
    double radius;

    double circumference(){
      return 3.14*radius*radius;
    }
};

int main(){
  Circle obj;

  obj.radius = 5.5;

  cout << obj.radius << endl;
  cout << obj.circumference();

  return 0;
}
