#include <iostream>
using namespace std;

int main()
{
    int A[] = {3, 5, -2, 9, -4, 10, -24, 19, 81, -7, 12, 13};
    int pcount = 0, ncount = 0;
    for (int x : A)
    {
        if (x > 0)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }
    cout << "The total positive number is: " << pcount << endl;
    cout << "The total negative number is: " << ncount << endl;

    return 0;
}
