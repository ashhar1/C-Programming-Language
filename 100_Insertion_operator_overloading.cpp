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
    friend ostream &operator<<(ostream &o, Complex &c1);
    friend Complex operator+(Complex c1, Complex c2);
};
ostream &operator<<(ostream &o, Complex &c1)
{
    o << c1.real << "+" << c1.img << "i";
    return o;
}
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    Complex c1(5, 3), c2(10, 5), c3;
    cout << c1 << endl;
    cout << c2 << endl;
    c3 = c1 + c2;
    cout << c3 << endl;

    return 0;
}
