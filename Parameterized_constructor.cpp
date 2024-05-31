#include <iostream>
using namespace std;
int l, b;
class hariom {
private:
    int area;

public:
    hariom(int l, int b ) {
       area=l*b;


    }

    ~hariom() {
    cout<< "The area of rectangle is"<<area;
    }
};

int main() {
    cout<<"\n Enter the length and breadth of the rectangle:\t"<<endl;
    cin>>l;
    cin>>b;
    hariom bibek(l, b);
    return 0;
}
