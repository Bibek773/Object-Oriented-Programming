#include <iostream>
using namespace std;

class hariom {
private:
    string type, brand, year;

public:
    hariom() {
        cout << "\nEnter the Type of vehicle: ";
        getline(cin, type);
        cout << "\nEnter the Brand of vehicle: ";
        getline(cin, brand);
        cout << "\nEnter the Manufacture year of vehicle: ";
        getline(cin, year);
    }

    ~hariom() {
        cout << "\nBrand Name of vehicle: " << brand;
        cout << "\nType  of vehicle: " << type;
        cout << "\nBrand Manufacture date of vehicle: " << year;
    }
};

int main() {
    hariom bibek;
    return 0;
}
