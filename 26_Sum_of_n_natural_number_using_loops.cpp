#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the nth number of your choice: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of " << n << " natural number is " << sum << endl;

    return 0;
}
