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

    // strcmp is case-sensitive: 'A' and 'a' are different characters
    if (strcmp(firstString, secondString) == 0)
    {
        cout << "The strings are equal (case-sensitive match)" << endl;
    }
    else
    {
        cout << "The strings are NOT equal (case-sensitive comparison)" << endl;
    }
    return 0;
}
