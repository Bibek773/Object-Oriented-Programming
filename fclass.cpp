#include<iostream>
using namespace std;
class mean
{
    int a;
public:
    mean(){
        a=3;
    }
    friend class B;
};
class B
{
    int b;
public:
    B(){
    b=9;
    }
    friend class mean;
};
void mean_num(mean m)
{

    cout<<"mean is "<<(m.a+b)/2;

}
int main(){

    mean m;
    B c;
    c.mean_num(m);
    return 0;

}
