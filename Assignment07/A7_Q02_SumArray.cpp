#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char inputText[100];
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin.getline(inputText, 100);

    int textLength = strlen(inputText);     // length found using strlen()

    for (int i = 0; i < textLength; i++)
    {
        char currentChar = inputText[i];

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
            currentChar == 'o' || currentChar == 'u' ||
            currentChar == 'A' || currentChar == 'E' || currentChar == 'I' ||
            currentChar == 'O' || currentChar == 'U')
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels = " << vowelCount << endl;
    return 0;
}
