#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter the number of your choice: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << "The sum of factors are " << sum << endl;

    return 0;
}
