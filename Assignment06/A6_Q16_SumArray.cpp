#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int searchKey;
    int occurrenceCount = 0;

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter the element to count: ";
    cin >> searchKey;

    // Linear search: check every element and count the matches
    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == searchKey)
        {
            occurrenceCount++;
        }
    }

    cout << "Element " << searchKey << " occurs " << occurrenceCount << " times in the array" << endl;

    return 0;
}
