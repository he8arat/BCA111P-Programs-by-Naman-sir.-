#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 2;                  // both matrices are 2 x 2
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int differenceMatrix[SIZE][SIZE];

    // Input first matrix
    cout << "Enter the first matrix:" << endl;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            cout << "A[" << row + 1 << "][" << col + 1 << "]: ";
            cin >> firstMatrix[row][col];
        }
    }

    // Input second matrix
    cout << "Enter the second matrix:" << endl;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            cout << "B[" << row + 1 << "][" << col + 1 << "]: ";
            cin >> secondMatrix[row][col];
        }
    }

    // Subtract corresponding elements (first - second)
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            differenceMatrix[row][col] = firstMatrix[row][col] - secondMatrix[row][col];
        }
    }

    // Display the result
    cout << "Difference of the matrices (A - B):" << endl;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            cout << differenceMatrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
