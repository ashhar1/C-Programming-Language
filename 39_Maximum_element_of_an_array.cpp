#include <iostream>
using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int max;
    max = A[0];
    for (int i = 0; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "The maximum element of the array is: " << max << endl;

    return 0;
}
