#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string email = "ashharahmed.16062001@gmail.com";
    int i = (int)email.find('@');
    string uname = email.substr(0, i);
    cout << "Username is: " << uname << endl;

    return 0;
}
