#include <iostream>
using namespace std;

inline void net_payment(string);

int main() {
    system("color a");
    string name;
    cout << "\nEnter Your Name: ";
    cin >> name;
    system("cls");
    net_payment(name);
    return 0;
}

inline void net_payment(string name) {
    int a, b;
    cout << "\nDear " << name << ", enter the amount of your purchase: ";
    cin >> a;
    system("cls");
    cout << "\nCongratulations, Mr/Mrs " << name;
    cout << "\nYou got a 10% discount on your purchase.";
    b = a / 10;
    b = a - b;
    cout << "\nYour net amount is: " << b;
}
