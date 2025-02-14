#include <iostream>
using namespace std;

int main(){
    string pangalan;
    string section;
    float math, science, filipino, calculus, physics, earthScience, biology, astronomy, kabuuan;

    cout << "Pangalan mo muna" << endl;
    cin >> pangalan;
    cout <<  "Section mo muna" << endl;
    cin >> section;

    cout << "Math" << endl;
    cin >> math;
    cout << "Science" << endl;
    cin >> science;
    cout << "Filipino" << endl;
    cin >> filipino;
    cout << "Calculus" << endl;
    cin >> calculus;
    cout << "Physics" << endl;
    cin >> physics;
    cout << "Earth Science" << endl;
    cin >> earthScience;
    cout << "Biology" << endl;
    cin >> biology;
    cout << "Astronomy" << endl;
    cin >> astronomy;

    kabuuan = math + science + filipino + calculus + physics + earthScience + biology + astronomy;

    cout << "Ikaw ay si " << pangalan << " , section mo ay " << section << " at ang kabuuan mo ay " << kabuuan / 8 << endl;
    
    return 0;
}

//gagawa ng program na mag iinput ng walang number tapos kunin ang sum tapos average tapos mag., add tapos divide sa kung ilan lahat