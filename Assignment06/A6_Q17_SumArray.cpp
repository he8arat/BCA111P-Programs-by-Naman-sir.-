#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int searchKey;
    bool isPresent = false;

    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter the number to check: ";
    cin >> searchKey;

    // Linear search: stop as soon as the number is found
    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == searchKey)
        {
            isPresent = true;
            break;
        }
    }

    if (isPresent)
    {
        cout << "Number " << searchKey << " is present in the array" << endl;
    }
    else
    {
        cout << "Number " << searchKey << " is NOT present in the array" << endl;
    }

    return 0;
}
