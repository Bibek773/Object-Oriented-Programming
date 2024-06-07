#include <iostream>
using namespace std;

class B;

class A {
private:
    int p;

public:
    void x() {
        cout << "\nEnter the value of a: ";
        cin >> p;
        system("cls");
    }

    friend void asdf(A, B);
};

class B {
private:
    int q;

public:
    void y() {
        cout << "\nEnter the value of b: ";
        cin >> q;
        system("cls");
    }

    friend void asdf(A, B);
};

void asdf(A a, B b) {
    int sum = a.p + b.q;
    cout << "\nSum is " << sum;
}

int main() {
    A a;
    B b;
    a.x();
    b.y();
    asdf(a, b);
    return 0;
}
