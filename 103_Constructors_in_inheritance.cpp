#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Non parametrized constructor" << endl;
    }
    Base(int x)
    {
        cout << "Parametrized constructor of Base " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Non parametrized constructor" << endl;
    }
    Derived(int y)
    {
        cout << "Parametrized constructor of Derived " << y << endl;
    }
    Derived(int x, int y) : Base(x)
    {
        cout << "Parametrized constructor of Derived " << y << endl;
    }
};

int main()
{
    Derived(10, 20);

    return 0;
}
