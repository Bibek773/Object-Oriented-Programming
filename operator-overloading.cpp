#include<iostream>
using namespace std;

class shreekrishna
{
    string a, b;
public:
    // Constructor to initialize the string attributes
    shreekrishna(string a, string b)
    {
        this->a = a;
        this->b = b;
    }

    // Default constructor to allow temporary objects
    shreekrishna() {}

    // Overloaded + operator to combine the strings
    shreekrishna operator +(shreekrishna obj)
    {
        shreekrishna object;
        object.a = a + obj.a;
        object.b = b + obj.b;
        return object;
    }

    // Display method to show the combined result
    void display()
    {
        cout << a << b << endl;
    }
};

int main()
{
    // Correct initialization of objects with double quotes
    shreekrishna facebook("bib", " ghim");
    shreekrishna twitter("ek ", "ire");

    // Using the overloaded + operator
    shreekrishna obj = facebook + twitter;

    // Display the result
    obj.display();

    return 0;
}
