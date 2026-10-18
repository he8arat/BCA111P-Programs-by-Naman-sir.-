#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 4;
    string studentNames[SIZE];
    string temporaryName;

    cout << "Enter " << SIZE << " student names:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Name " << i + 1 << ": ";
        cin >> studentNames[i];
    }

    // Bubble sort: compare neighbouring names and swap if out of order
    for (int pass = 0; pass < SIZE - 1; pass++)
    {
        for (int i = 0; i < SIZE - 1 - pass; i++)
        {
            if (studentNames[i] > studentNames[i + 1])
            {
                temporaryName = studentNames[i];
                studentNames[i] = studentNames[i + 1];
                studentNames[i + 1] = temporaryName;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << studentNames[i] << endl;
    }

    return 0;
}
