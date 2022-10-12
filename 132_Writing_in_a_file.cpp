#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("My.txt", ios::trunc);
    ofs << "Ashhar" << endl;
    ofs << 106 << endl;
    ofs << "CSE" << endl;
    ofs.close();

    return 0;
}
