#include <iostream>
using namespace std;

class Outer
{
public: ///if we don't add this then inner will be taken as private
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }
    };

public:
    void fun()
    {
        i.display();
    }

    Inner i;
};

int main()
{
    Outer::Inner i;

    return 0;
}
