#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout << "The address of formal parameters are: " << &a << " " << &b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << "The address of actual parameters are: " << &x << " " << &y << endl;
    swap(x, y);
    cout << "The value of x and y after function call: " << x << " " << y << endl;

    return 0;
}
