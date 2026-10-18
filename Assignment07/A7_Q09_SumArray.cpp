#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 5;
    char words[SIZE][50];
    char temporaryWord[50];

    cout << "Enter " << SIZE << " words:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Word " << i + 1 << ": ";
        cin >> words[i];
    }

    // Bubble sort, using strcmp() to decide which word comes first
    for (int pass = 0; pass < SIZE - 1; pass++)
    {
        for (int i = 0; i < SIZE - 1 - pass; i++)
        {
            if (strcmp(words[i], words[i + 1]) > 0)
            {
                strcpy(temporaryWord, words[i]);
                strcpy(words[i], words[i + 1]);
                strcpy(words[i + 1], temporaryWord);
            }
        }
    }

    cout << "Words in alphabetical order:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}
