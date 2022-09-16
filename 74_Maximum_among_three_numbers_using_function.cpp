#include <iostream>
using namespace std;

int max(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a, b, c, answer;
    cout << "Enter the three numbers: " << endl;
    cin >> a >> b >> c;
    answer = max(a, b, c);
    cout << "The maximum among the three numbers is: " << answer << endl;

    return 0;
}
