#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;      // number of elements in the array
    int numbers[SIZE];

    // Input the elements
    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display the elements
    cout << "Array elements are: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
