#include <iostream>
using namespace std;

int linear_search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int A[] = {2, 4, 5, 7, 10, 9, 13};
    int k;
    cout << "Enter the element to be searched: " << endl;
    cin >> k;
    int index = linear_search(A, 7, k);
    cout << "Element found at index: " << index << endl;

    return 0;
}
