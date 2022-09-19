#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    // Rectangle r1;
    // Rectangle *ptr;
    // ptr = &r1;
    Rectangle *ptr = new Rectangle; // here dynamic object has been created
    ptr->length = 15;
    ptr->breadth = 10;
    cout << "The area is: " << ptr->area() << endl;
    cout << "The perimeter is: " << ptr->perimeter() << endl;

    return 0;
}
