#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char inputText[100];
    char searchCharacter;

    cout << "Enter a string: ";
    cin.getline(inputText, 100);
    cout << "Enter a character to find: ";
    cin >> searchCharacter;

    // strchr returns the address of the first match, or NULL if there is none
    char *matchPointer = strchr(inputText, searchCharacter);

    if (matchPointer != NULL)
    {
        // Index = address of the match minus the address of the start of the string
        int matchIndex = matchPointer - inputText;
        cout << "First occurrence of '" << searchCharacter << "' is at index " << matchIndex << endl;
    }
    else
    {
        cout << "Character '" << searchCharacter << "' not found" << endl;
    }
    return 0;
}
