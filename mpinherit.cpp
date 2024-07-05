#include <iostream>
#include <cstdlib>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person(string n, int a): name(n) ,age(a){}
};

class student : virtual public person {
protected:
    string program;

public:
    student(string n, int a, string p): person(n,a), program(p) {}
};

class teacher : virtual public person {
protected:
    string qualification;

public:
    teacher(string n, int a, string q):person(n,a), qualification(q)  {}
};

class record : public teacher, public student {
protected:
    int recod;

public:
    record(string n, int a, string q, string p, int r):person(n,a), student(n,a,p), teacher(n,a,q), recod(r){}

    ~record() {
        system("cls");
        cout << "\nName:\t" << name << "\nAge:\t" << age << "\nProgram:\t" << program<< "\nTeacher's qualification:\t" << qualification << "\nRecord no:\t" << recod;
    }
};

int main() {
    record a("Bibek Ghimire", 19, "Ph.D." , "Computer Engineering", 230309);
    return 0;
}
