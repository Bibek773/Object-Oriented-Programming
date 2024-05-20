#include<iostream>
using namespace std;

class bibek
{
    int flightno;
    string name, d_city, a_city, seat;
    public:
        void input() {
            cout<<"\n Enter name.\n";
            cin>>name;
            cout<<"Departure city:";
            cin>>d_city;
             cout<<"Arrival city:";
            cin>>a_city;
            cout<<"flight no:";
            cin>>flightno;
            cout<<"seat no";
            cin>>seat;
        }
        void display();
};

void bibek::display(){
    cout<<"\n\n\n\t\t\t\t Qatar Airlines";
    cout<<"\n\n\tName of the passenger:\t\t\t"<<name;
    cout<<"\n\tDeparture city:"<<d_city<<"\t\tArrival city:"<<a_city;
    cout<<"\n\tFlight no:"<<flightno<<"\t\t\tSeat no:"<<seat;
    cout<<"\n\n\n \t\t\t Have a safe flight";

}

int main(){
    cout<<"\t\t Welcome to Qatar Airlines\n";
    cout<<"\nEnter the the following to get your ticket\n";
    bibek b;
    b.input();
    b.display();


    return 0;
}


