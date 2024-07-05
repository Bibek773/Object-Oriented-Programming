#include <iostream>
#include<string>
using namespace std;

class gadi
{
    protected:
    string bran;
public:
    void a(){
        cout << "\n \t Tapai ko gadi kun brand ko ho??\n \t Afnu gadi ko brand ko nam leknus\n";
        std::getline(std::cin, bran);
    }
};

class prakar : public gadi
{
    string type, sal, rang;

public:
    void jankari()
    {
        cout << "\n \tTapai ko gadi kun prakar ko ho??\n";
        std::getline(std::cin, type);
        cout << "\n \tTapai ko gadi kun sal ma baneko ho?\n";
        std::getline(std::cin, sal);
        cout << "\n \tTapai ko gadi kun color ki chha??\n";
        std::getline(std::cin, rang);
    }

    void dekhau()
    {
        system("cls");
        cout << "\n Tapai ko gadi " << bran << " brand ko " << type << " ho\n";
        cout << "Tapai ko gadi " << sal << " ma manufacture vako thiyo ra tapaiko gadi " << rang << " color ko xa\n";
        cout << "\t Dhanyvad\n";
    }
};

int main()
{
    prakar car;
    car.a();
    car.jankari();
    car.dekhau();
    return 0;
}
