#include <iostream>
#include <cmath>
using namespace std;

int power(int x, int y)
{
    int z;
    z = pow(x, y);
    return z;
}
int main()
{
    int m, n, answer;
    cout << "Enter the number followed by the power: " << endl;
    cin >> m >> n;
    answer = power(m, n);
    cout << "The desired result is: " << answer << endl;

    return 0;
}
