#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter the number: " << endl;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural number is " << sum << endl;

    return 0;
}
