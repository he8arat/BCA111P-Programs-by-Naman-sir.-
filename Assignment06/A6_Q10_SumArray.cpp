#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 2;                  // both matrices are 2 x 2
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int productMatrix[SIZE][SIZE];

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

    // Matrix multiplication:
    // product[row][col] = sum of firstMatrix[row][k] * secondMatrix[k][col]
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            productMatrix[row][col] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                productMatrix[row][col] += firstMatrix[row][k] * secondMatrix[k][col];
            }
        }
    }

    // Display the result
    cout << "Product of the matrices:" << endl;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            cout << productMatrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
