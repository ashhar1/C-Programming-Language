#include <iostream>
using namespace std;

int main()
{
    char x = 127;
    x++;
    cout << (int)x << endl;

    char y = -128;
    y--;
    cout << (int)y << endl;

    int z = INT_MAX;
    z++;
    cout << z << endl;
    return 0;
}
