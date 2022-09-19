#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // non parametrized constructor
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    // parametrized constructor
    Rectangle(int l, int b) // if int l = 1 and int b = 1 then we don't need a non parametrized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    // copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 1;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 1;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(10, 5);
    Rectangle r3(r2);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}
