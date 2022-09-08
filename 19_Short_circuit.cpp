#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 11, i = 5, j = 6;
    if (a > b && ++i < b)
    {
    }
    cout << i << endl;
    if (a < b || ++j > b)
    {
    }
    cout << j << endl;
    return 0;
}
