#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Bubble sort: swap when the left element is SMALLER, so larger values move left
    for (int pass = 0; pass < SIZE - 1; pass++)
    {
        for (int i = 0; i < SIZE - 1 - pass; i++)
        {
            if (numbers[i] < numbers[i + 1])
            {
                int temporary = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temporary;
            }
        }
    }

    cout << "Sorted in descending order: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
