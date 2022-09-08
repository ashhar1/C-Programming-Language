#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of your choice: " << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "It is a positive number" << endl;
    }
    else
    {
        cout << "It is a negative number" << endl;
    }

    return 0;
}
