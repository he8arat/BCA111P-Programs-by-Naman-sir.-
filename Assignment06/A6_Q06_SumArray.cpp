#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int searchKey;
    int foundPosition = -1;      // -1 means "not found"

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter the element to search: ";
    cin >> searchKey;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == searchKey)
        {
            foundPosition = i;
            break;               // stop at the first match
        }
    }

    if (foundPosition != -1)
    {
        cout << "Element " << searchKey << " found at position " << foundPosition + 1 << endl;
    }
    else
    {
        cout << "Element " << searchKey << " not found in the array" << endl;
    }

    return 0;
}
