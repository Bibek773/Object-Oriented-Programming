#include <iostream>
using namespace std;

class hariom {
private:
    string name;

public:
    hariom() {
        name = "Unknown";
    }

    hariom(string fname) {
        name = fname;
    }

    hariom(string fname, string lname) {
        name = fname + lname;
    }

    void display() {
        cout << "\nName is: " << name;
    }
};

int main() {
    string f, l;
    cout << "\nEnter the first and second name: ";
    cin >> f >> l;

    hariom bibek(f, l);
    hariom bibe(f);
    hariom bib;
    bibek.display();
    bibe.display();
    bib.display();

    return 0;
}
