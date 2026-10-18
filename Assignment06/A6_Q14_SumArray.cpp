#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int numbers[SIZE];
    int searchKey;
    int comparisonCount = 0;     // how many elements were checked
    int foundPosition = -1;      // -1 means "not found"
    bool found = false;

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter the element to search: ";
    cin >> searchKey;

    // Linear search: check elements one by one from the start
    for (int i = 0; i < SIZE && !found; i++)
    {
        comparisonCount++;
        if (numbers[i] == searchKey)
        {
            found = true;
            foundPosition = i;
        }
    }

    if (found)
    {
        cout << "Element found at position " << foundPosition + 1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    cout << "Number of comparisons = " << comparisonCount << endl;

    return 0;
}
