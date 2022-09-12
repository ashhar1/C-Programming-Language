#include <iostream>
using namespace std;

int main()
{
    char S[10] = "Hello";
    cout << S << endl;
    char Z[] = "World";
    cout << Z << endl;
    char A[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << A << endl;
    char B[] = {65, 66, 67, 68, 0, 69, 70}; // here 0 is acting as terminating character
    cout << B << endl;
    char *P = "World"; // we may not use this one as it doesn't work perfectly always
    cout << P << endl;
    string s = "Use of string class";
    cout << s << endl;

    return 0;
}
