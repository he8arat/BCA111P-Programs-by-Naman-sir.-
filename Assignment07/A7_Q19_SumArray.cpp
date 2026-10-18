#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int WORD_COUNT = 4;
    char words[WORD_COUNT][30];
    char sentence[200] = "";     // start with an empty string

    for (int i = 0; i < WORD_COUNT; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }

    // Add each word to the sentence, with a space between words
    for (int i = 0; i < WORD_COUNT; i++)
    {
        strcat(sentence, words[i]);
        if (i < WORD_COUNT - 1)
        {
            strcat(sentence, " ");
        }
    }
    strcat(sentence, ".");       // end the sentence with a full stop

    cout << "Sentence = " << sentence << endl;
    return 0;
}
