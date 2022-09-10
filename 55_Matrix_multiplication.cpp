#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], Mult[10][10], r1, c1, r2, c2;

    cout << "Enter Rows and Columns for First Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter Rows and Columns for Second Matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Cant be Multiplied";
        return 0;
    }

    // Storing Elements of First Matrix.
    cout << endl;
    cout << "Enter Elements of Matrix 1:" << endl;

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
        {
            cout << "Enter Element A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }

    // Storing Elements of Second Matrix.
    cout << endl;
    cout << "Enter Elements of Matrix 2:" << endl;

    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
        {
            cout << "Enter Element B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }

    // Multiplying Matrix A and B and Storing in Array Mult.
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
        {
            Mult[i][j] = 0;

            for (int k = 0; k < c1; ++k)
            {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }

    // Displaying the Multiplication of Two Matrix.
    cout << endl;
    cout << "Output Matrix: " << endl;

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
        {
            cout << " " << Mult[i][j];

            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}
