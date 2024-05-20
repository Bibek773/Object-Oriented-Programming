#include<iostream>
using namespace std;

class bibek
{
    int age;
    string name;
    public:
        void input() {
            cout<<"\n Enter the name of student.\n";
            cin>>name;
            cout<<"\n Enter the age of "<<name<<endl;
            cin>>age;
        }
        void display();
};

void bibek::display(){
    cout<<"\nName :"<<name;
    cout<<"\nAge:"<<age;
}

int main(){
    bibek b1, b2;
    b1.input();
    b1.display();
    b2.input();
    b2.display();

    return 0;
}
