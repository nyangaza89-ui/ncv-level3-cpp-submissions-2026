#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;

public:
    Person(); // default constructor
    Person(string nm, int ag, char gn); // parameterised constructor
    void setPerson(string nm, int ag, char gn); // setter
    string getName(); // getters
    int getAge();
    char getGender();
};

Person::Person()
{
    name = "";
    age = 0;
    gender = ' ';
}

Person::Person(string nm, int ag, char gn)
{
    setPerson(nm, ag, gn);
}

void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;
    if (ag >= 0 && ag <= 120) // the setter guards the data
        age = ag;
    else
        age = 0;
        //if (gn =='F') ||
    gender = gn;
}

string Person::getName() { return name; }
int Person::getAge() { return age; }
char Person::getGender() { return gender; }

int main()
{
    Person ps;
    ps.setPerson("Thato", 23, 'M'); // default constructor runs

    Person p2("Lerato", 19, 'F'); // parameterised constructor runs

    cout << ps.getName() << ", " << ps.getAge() << ", " << ps.getGender() << endl;
    cout << p2.getName() << ", " << p2.getAge() << ", " << p2.getGender() << endl;

    p2.setPerson("Lerato", 200, 'F');
    cout << p2.getName() << ", " << p2.getAge() << endl; // invalid age is rejected
    return 0;
}
