#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sourceText[100];
    char firstFiveCharacters[10];

    cout << "Enter a string: ";
    cin.getline(sourceText, 100);

    // Copy at most 5 characters from sourceText
    strncpy(firstFiveCharacters, sourceText, 5);
    firstFiveCharacters[5] = '\0';       // add the end marker (strncpy does not add it here)

    cout << "Original string = " << sourceText << endl;
    cout << "First 5 characters copied = " << firstFiveCharacters << endl;
    return 0;
}
