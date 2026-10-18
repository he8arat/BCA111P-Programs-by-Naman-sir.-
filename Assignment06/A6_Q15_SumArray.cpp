#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int sortedNumbers[SIZE];
    int searchKey;
    int lowIndex = 0;
    int highIndex = SIZE - 1;
    int middleIndex;
    int foundPosition = -1;      // -1 means "not found"

    cout << "Enter " << SIZE << " elements in ascending order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> sortedNumbers[i];
    }

    cout << "Enter the element to search: ";
    cin >> searchKey;

    // Binary search: look at the middle, then discard the half that cannot contain the key
    while (lowIndex <= highIndex)
    {
        middleIndex = (lowIndex + highIndex) / 2;

        if (sortedNumbers[middleIndex] == searchKey)
        {
            foundPosition = middleIndex;
            break;
        }
        else if (sortedNumbers[middleIndex] < searchKey)
        {
            lowIndex = middleIndex + 1;      // key must be in the right half
        }
        else
        {
            highIndex = middleIndex - 1;     // key must be in the left half
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
