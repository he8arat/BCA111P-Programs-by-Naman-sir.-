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

    // Start by assuming the first element is both the largest and the smallest
    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    cout << "Maximum element = " << maximum << endl;
    cout << "Minimum element = " << minimum << endl;
    return 0;
}
