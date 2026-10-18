#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 2;
    const int COLS = 3;
    int matrix[ROWS][COLS];

    // Input the matrix row by row
    cout << "Enter the elements of a " << ROWS << " x " << COLS << " matrix:" << endl;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << "Element [" << row + 1 << "][" << col + 1 << "]: ";
            cin >> matrix[row][col];
        }
    }

    // Display the matrix
    cout << "The matrix is:" << endl;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
