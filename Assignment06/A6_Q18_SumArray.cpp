#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int sortedNumbers[SIZE];
    int searchKey;
    int lowIndex = 0;
    int highIndex = SIZE - 1;
    int middleIndex;
    int stepCount = 0;           // how many middle elements were checked
    int foundPosition = -1;

    cout << "Enter " << SIZE << " integers in ascending order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> sortedNumbers[i];
    }

    cout << "Enter the integer to search: ";
    cin >> searchKey;

    while (lowIndex <= highIndex)
    {
        middleIndex = (lowIndex + highIndex) / 2;
        stepCount++;

        if (sortedNumbers[middleIndex] == searchKey)
        {
            foundPosition = middleIndex;
            break;
        }
        else if (sortedNumbers[middleIndex] < searchKey)
        {
            lowIndex = middleIndex + 1;
        }
        else
        {
            highIndex = middleIndex - 1;
        }
    }

    if (foundPosition != -1)
    {
        cout << "Found " << searchKey << " at position " << foundPosition + 1
             << " after " << stepCount << " steps" << endl;
    }
    else
    {
        cout << searchKey << " is not in the array (" << stepCount << " steps)" << endl;
    }

    return 0;
}
