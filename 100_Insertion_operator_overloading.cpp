#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &o, Complex &c);
};
ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << "+" << c.img << "i" << endl; // if using cout then don't put endl in this statement
    return o;
}
int main()
{
    Complex c1(5, 3), c2(10, 5);
    // cout << c1 << endl;
    operator<<(cout, c1);
    // cout << c2 << endl;
    operator<<(cout, c2);

    return 0;
}
