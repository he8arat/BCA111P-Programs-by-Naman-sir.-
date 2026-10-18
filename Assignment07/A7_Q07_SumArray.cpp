#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstString[100];
    char secondString[100];

    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);

    // strcmp returns 0 if equal, a negative value if the first comes before, positive if after
    int comparisonResult = strcmp(firstString, secondString);

    if (comparisonResult == 0)
    {
        cout << "Both strings are equal" << endl;
    }
    else if (comparisonResult < 0)
    {
        cout << "First string comes before second string alphabetically" << endl;
    }
    else
    {
        cout << "First string comes after second string alphabetically" << endl;
    }
    return 0;
}
