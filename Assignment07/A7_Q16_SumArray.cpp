#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[200];
    int wordCount = 0;
    bool insideWord = false;     // true while we are in the middle of a word

    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);

    int sentenceLength = strlen(sentence);

    for (int i = 0; i < sentenceLength; i++)
    {
        if (sentence[i] != ' ')
        {
            // A non-space character after a space (or at the start) begins a new word
            if (!insideWord)
            {
                wordCount++;
                insideWord = true;
            }
        }
        else
        {
            insideWord = false;  // a space ends the current word
        }
    }

    cout << "Number of words = " << wordCount << endl;
    return 0;
}
