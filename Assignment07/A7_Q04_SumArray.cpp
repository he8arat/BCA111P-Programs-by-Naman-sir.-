#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstString[100];
    char secondString[100];
    char copyOfFirstString[100];

    cout << "Enter first string: ";
    cin.getline(firstString, 100);
    cout << "Enter second string: ";
    cin.getline(secondString, 100);

    strcpy(copyOfFirstString, firstString);     // make a copy of the first string

    // Compare the copy with the second string, character by character
    bool areEqual = true;
    int copyLength = strlen(copyOfFirstString);

    if (copyLength != strlen(secondString))
    {
        areEqual = false;                        // different lengths, cannot be equal
    }

    for (int i = 0; i < copyLength && areEqual; i++)
    {
        if (copyOfFirstString[i] != secondString[i])
        {
            areEqual = false;
        }
    }

    if (areEqual)
    {
        cout << "The strings are equal" << endl;
    }
    else
    {
        cout << "The strings are not equal" << endl;
    }
    return 0;
}
