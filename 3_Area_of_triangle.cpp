#include <iostream>
using namespace std;

int main()
{
    float base, height, area;
    cout << "Enter the base and height:" << endl;
    cin >> base >> height;
    area = (base * height) / 2;
    cout << "The area of triangle is: " << area << endl;

    return 0;
}
