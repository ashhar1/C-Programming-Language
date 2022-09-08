#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter the three coefficients of quadratic equation: " << endl;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        cout << "The roots are real and equal" << endl;
    }
    else if (d > 0)
    {
        cout << "The roots are real and unequal" << endl;
    }
    else
    {
        cout << "The roots are imaginary" << endl;
    }

    return 0;
}
