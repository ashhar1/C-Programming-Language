#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout << "The value received by the function: " << *a << " " << *b << endl;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "The value after the logic: " << *a << " " << *b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << "The value of x and y after function call: " << x << " " << y << endl;

    return 0;
}
