#include <iostream>
using namespace std;

class cylinder;

class box {
private:
    int l, b, h;

public:
    void x() {
        cout << "\nEnter the length, breadth and height of the box \t  ";
        cin >> l>>b>>h;
        system("cls");
    }

    friend void asdf(box, cylinder);
};

class cylinder {
private:
    float radii,height;

public:
    void y() {
        cout << "\nEnter the radius and height of cylinder  ";
        cin >> radii>>height;
        system("cls");
    }

    friend void asdf(box, cylinder);
};

void asdf(box a, cylinder b) {
    int vb = a.l*a.b*a.h;
    cout << "\nVolume of the box is " << vb;
    float vc=3.14 *b.height*b.radii*b.radii;
    cout << "\nVolume of the cylinder is " << vc;

}

int main() {
     box a;
    cylinder b;
    a.x();
    b.y();
    asdf(a, b);
    return 0;
}

