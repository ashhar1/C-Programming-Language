#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        // fun(n-1); -> if called first the  output changes to 1 2 3 4 5
        cout << n << endl;
        fun(n - 1);
    }
}
int main()
{
    int x = 5;
    fun(x);

    return 0;
}
