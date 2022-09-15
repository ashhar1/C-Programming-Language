#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "MADAM";
    string rev = "";
    int len = (int)str.length();
    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    cout << rev << endl;
    if (str.compare(rev) == 0)
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}
