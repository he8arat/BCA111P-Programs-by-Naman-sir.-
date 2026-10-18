#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstWord[100];
    char secondWord[100];
    int letterCount[128] = {0};  // one counter for each ASCII character

    cout << "Enter first word: ";
    cin >> firstWord;
    cout << "Enter second word: ";
    cin >> secondWord;

    int firstLength = strlen(firstWord);
    int secondLength = strlen(secondWord);

    // Words with different lengths cannot be anagrams
    bool areAnagrams = (firstLength == secondLength);

    if (areAnagrams)
    {
        // Add 1 for each letter of the first word and subtract 1 for each letter of the second
        for (int i = 0; i < firstLength; i++)
        {
            letterCount[firstWord[i]]++;
            letterCount[secondWord[i]]--;
        }

        // If the words are anagrams, every counter ends at 0
        for (int code = 0; code < 128; code++)
        {
            if (letterCount[code] != 0)
            {
                areAnagrams = false;
            }
        }
    }

    if (areAnagrams)
    {
        cout << firstWord << " and " << secondWord << " are anagrams" << endl;
    }
    else
    {
        cout << firstWord << " and " << secondWord << " are NOT anagrams" << endl;
    }
    return 0;
}
