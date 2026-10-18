#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char originalText[200];
    char resultText[200];
    char singleCharacter[2];     // holds one character plus the end marker

    cout << "Enter a string: ";
    cin.getline(originalText, 200);

    int originalLength = strlen(originalText);
    resultText[0] = '\0';        // start with an empty result

    for (int i = 0; i < originalLength; i++)
    {
        char currentChar = originalText[i];

        bool isVowel = (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                        currentChar == 'o' || currentChar == 'u' ||
                        currentChar == 'A' || currentChar == 'E' || currentChar == 'I' ||
                        currentChar == 'O' || currentChar == 'U');

        if (!isVowel)
        {
            singleCharacter[0] = currentChar;
            singleCharacter[1] = '\0';
            strcat(resultText, singleCharacter);     // add the character to the result
        }
    }

    cout << "String without vowels = " << resultText << endl;
    return 0;
}
