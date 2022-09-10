#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }
    cout << "The sum of the array is: " << sum << endl;

    return 0;
}
