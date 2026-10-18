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

    // Swap the elements from both ends, moving towards the middle
    int leftIndex = 0;
    int rightIndex = SIZE - 1;
    while (leftIndex < rightIndex)
    {
        int temporary = numbers[leftIndex];
        numbers[leftIndex] = numbers[rightIndex];
        numbers[rightIndex] = temporary;

        leftIndex++;
        rightIndex--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
