#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "WeLcOmE5";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "The string is: " << str << endl;
    /*corresponding string iterator
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        if (*it >= 97 && *it <= 122)
        {
            *it = *it - 32;
        }
    }
    cout << "The string is: " << str << endl;
    */
  
    return 0;
}
