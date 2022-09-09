#include <iostream>
using namespace std;

int main()
{
    // while loop
    int n, i = 1;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    while (i <= n)
    {
        cout << "Hello ";
        i++;
    }
    cout << endl;
    // do while loop
    int num, j = 1;
    cout << "Enter the value of num: " << endl;
    cin >> num;
    do
    {
        cout << "World ";
        j++;
    } while (j <= num);
    cout << endl;
    // for loop
    int number;
    cout << "Enter the value of number: " << endl;
    cin >> number;
    for (int k = 1; k <= number; k++)
    {
        cout << "Bye ";
    }

    return 0;
}
