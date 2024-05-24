#include <iostream>
using namespace std;
class Bibek
{
    private:
        int ab;
    public:
        Bibek(): ab(0) { }
        friend int ghimire(Bibek); //friend function
};
int ghimire(Bibek b)
{
   b.ab += 10;
    return b.ab;
}
int main()
{
    Bibek b;
    cout<<"Length of box: "<< ghimire(b)<<endl;
    return 0;
}
