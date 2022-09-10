#include <iostream>
using namespace std;

int main()
{
    int n, r, m, rev = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (rev == m)
    {
        cout << "The number you have given is a palindrome" << endl;
    }
    else
    {
        cout << "The number you have given is not a palindrome" << endl;
    }

    return 0;
}
