#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three numbers of your choice: " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the maximum among the three number" << endl;
    }
    else if (b > c)
    {
        cout << b << " is the maximum among the three number" << endl;
    }
    else
    {
        cout << c << " is the maximum among the three number" << endl;
    }

    return 0;
}
