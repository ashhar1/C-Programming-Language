#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "today";
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    string::reverse_iterator it1;
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
    {
        cout << *it1;
    }
    /*printing string letter by letter using for loop
    for(int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    */

    return 0;
}
