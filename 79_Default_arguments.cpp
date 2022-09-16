#include <iostream>
using namespace std;

int add(int x, int y, int z = 0)
{
    return x + y + z;
}
int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
    cout << add(10, 5) << endl;
    cout << add(10, 5, 8) << endl;
    cout << add(17, 8, 0) << endl;

    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(10, 13) << endl;
    cout << max(10, 13, 15) << endl;

    return 0;
}
