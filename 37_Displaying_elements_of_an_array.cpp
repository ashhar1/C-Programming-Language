#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    cout << "Displaying elements of an array using for loop: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    cout << endl;
    cout << "Displaying elements of an array using for each loop: " << endl;
    for (int x : A) // we can also use -> for(auto x : A)
    {
        cout << x << endl;
    }

    return 0;
}
