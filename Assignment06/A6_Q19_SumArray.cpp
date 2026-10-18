#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    float sortedNumbers[SIZE];
    float searchKey;
    int lowIndex = 0;
    int highIndex = SIZE - 1;
    int middleIndex;
    int foundPosition = -1;

    cout << "Enter " << SIZE << " decimal numbers in ascending order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> sortedNumbers[i];
    }

    cout << "Enter the number to search: ";
    cin >> searchKey;

    // Same binary search logic, now with float values
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
            lowIndex = middleIndex + 1;
        }
        else
        {
            highIndex = middleIndex - 1;
        }
    }

    if (foundPosition != -1)
    {
        cout << "Found " << searchKey << " at position " << foundPosition + 1 << endl;
    }
    else
    {
        cout << searchKey << " is not in the array" << endl;
    }

    return 0;
}
