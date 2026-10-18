#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int sumOfElements = 0;          // running total, starts at 0

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
        sumOfElements = sumOfElements + numbers[i];
    }

    cout << "Sum of all elements = " << sumOfElements << endl;
    return 0;
}
