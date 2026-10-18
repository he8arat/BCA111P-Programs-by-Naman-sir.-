#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int sortedNumbers[SIZE];
    int limitValue;
    int lowIndex = 0;
    int highIndex = SIZE - 1;
    int middleIndex;
    int answerIndex = -1;        // index of the best candidate found so far

    cout << "Enter " << SIZE << " numbers in ascending order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> sortedNumbers[i];
    }

    cout << "Enter the limit value: ";
    cin >> limitValue;

    // Binary search for the largest element that is <= limitValue
    while (lowIndex <= highIndex)
    {
        middleIndex = (lowIndex + highIndex) / 2;

        if (sortedNumbers[middleIndex] <= limitValue)
        {
            answerIndex = middleIndex;       // valid candidate, look for a larger one on the right
            lowIndex = middleIndex + 1;
        }
        else
        {
            highIndex = middleIndex - 1;     // too large, search the left half
        }
    }

    if (answerIndex != -1)
    {
        cout << "Largest element not greater than " << limitValue << " is "
             << sortedNumbers[answerIndex] << " (position " << answerIndex + 1 << ")" << endl;
    }
    else
    {
        cout << "No element is less than or equal to " << limitValue << endl;
    }

    return 0;
}
