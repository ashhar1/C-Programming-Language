#include <iostream>
using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int min;
    min = A[0];
    for (int i = 0; i < 7; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "The minimum element of the array is: " << min << endl;

    return 0;
}
