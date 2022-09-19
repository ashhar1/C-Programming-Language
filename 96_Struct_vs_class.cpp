#include <iostream>
using namespace std;

struct Demo // if we change struct with class we should add public too then
{
// public:
    int x;
    int y;
    void Display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Demo d;
    d.x = 10;
    d.y = 20;
    d.Display();

    return 0;
}
