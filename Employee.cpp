#include<iostream>

using namespace std;

class employee
{

    int sal;
    string f_name, l_name;
public:
    void input()
    {
        cout<<"\n Enter Your First Name:";
        cin>>f_name;
        cout<<"\n Enter Your Last Name:";
        cin>>l_name;
        cout<<"\n Enter Your Salery:";
        cin>>sal;
    }
    void display();

};
void employee::display()
{
    cout<<"\nName is"<<f_name<<" "<<l_name;
    cout<<"\nSalery:"<<sal;

}
int main()
{

    int n;
    cout<<"\nEnter the no of Employee:\n";
    cin>>n;
    employee b[n];
    for(int i=0; i<n; i++){
        cout<<"\nEnter  details for employee "<<i+1;
        b[i].input();
    }
    for(int i=0; i<n; i++){
        cout<<"\nDetails of employee\n "<<i+1;
        b[i].display();

    }
    return 0;
}
