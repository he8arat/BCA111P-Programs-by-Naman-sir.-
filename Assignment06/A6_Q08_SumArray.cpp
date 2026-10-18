#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 2;                  // both matrices are 2 x 2
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int sumMatrix[SIZE][SIZE];

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

    // Add corresponding elements
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            sumMatrix[row][col] = firstMatrix[row][col] + secondMatrix[row][col];
        }
    }

    // Display the result
    cout << "Sum of the matrices:" << endl;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            cout << sumMatrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
