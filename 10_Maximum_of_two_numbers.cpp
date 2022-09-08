#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two numbers of your choice: " << endl;
    cin >> x >> y;
    if (x > y)
    {
        cout << x << " is maximum";
    }
    else
    {
        cout << y << " is maximum";
    }

    return 0;
}
