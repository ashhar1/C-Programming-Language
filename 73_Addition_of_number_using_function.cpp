#include <iostream>
using namespace std;

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a = 10, b = 5, c;
    c = add(a, b);
    cout << "The sum is: " << c << endl;

    return 0;
}
