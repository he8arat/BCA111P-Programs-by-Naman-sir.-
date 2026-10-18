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

    // strrchr searches from the END of the string, so it finds the last match
    char *matchPointer = strrchr(inputText, searchCharacter);

    if (matchPointer != NULL)
    {
        int matchIndex = matchPointer - inputText;
        cout << "Last occurrence of '" << searchCharacter << "' is at index " << matchIndex << endl;
    }
    else
    {
        cout << "Character '" << searchCharacter << "' not found" << endl;
    }
    return 0;
}
