#include <iostream>
using namespace std;

enum day {mon, tues, wed, thurs, fri, sat, sun};
enum dept {cse = 1, ece, it, civil = 7, mech};

int main()
{
    day d;
    d = tues;
    cout << d << endl;

    dept dp;
    dp = ece;
    cout << dp << endl;

    dp = mech;
    cout << dp << endl;
    return 0;
}
