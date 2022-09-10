#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "The factor of" << n << " is " << i << endl;
        }
    }

    return 0;
}
