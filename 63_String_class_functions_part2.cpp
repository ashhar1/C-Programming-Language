#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "programming";
    cout << str.replace(3, 4, "kk") << endl;

    string s = "hello";
    s.push_back('z');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;

    str.swap(s);
    cout << str << endl;
    cout << s << endl;

    return 0;
}
