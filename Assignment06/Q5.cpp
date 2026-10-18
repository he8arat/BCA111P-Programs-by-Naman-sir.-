#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] % 2 == 0)       // remainder 0 means even
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Even numbers = " << evenCount << endl;
    cout << "Odd numbers = " << oddCount << endl;
    return 0;
}
