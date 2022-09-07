#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 11, z, p, q, r, s, t;
    z = x & y;
    cout << z << endl;
    p = x | y;
    cout << p << endl;
    q = x ^ y;
    cout << q << endl;
    r = ~x;
    cout << r << endl;
    s = x << 1;
    cout << s << endl;
    t = y >> 1;
    cout << t << endl;

    return 0;
}
