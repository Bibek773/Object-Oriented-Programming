#include<iostream>
using namespace std;
class ram
{
protected:
    int n;
public:

    ram(){
        cout<<"enter the value of n\n";
        cin>>n;
    }

};
class sita
{
protected:
    int m;
public:

    sita(){
        cout<<"\nenter the value of m\n";
        cin>>m;
    }

};
class luvkush:public ram, public sita
{
protected:
    int o;
public:

    luvkush(){
        if(n>m)
            o=m;
        else
            o=n;
    }
    ~luvkush(){
        cout<<o<<" is the minimum in "<<m<<" and " <<n;
    }

};
int main()
{
    luvkush ramayan;

    return 0;
}
