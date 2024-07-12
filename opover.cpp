#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    Time() : h(0), m(0), s(0) {}

    Time operator +(Time obj)
    {
        Time object;
        object.s = s + obj.s;
        object.m = m + obj.m + object.s / 60;
        object.s %= 60;
        object.h = h + obj.h + object.m / 60;
        object.m %= 60;
        return object;
    }

    void display()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    Time a(3, 59, 50);
    Time b(5, 38, 50);

    Time obj = a + b;

    obj.display();

    return 0;
}
