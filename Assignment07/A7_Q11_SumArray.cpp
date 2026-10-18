#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char originalWord[100];
    char reversedWord[100];

    cout << "Enter a word: ";
    cin >> originalWord;

    strcpy(reversedWord, originalWord);      // copy, so the original is not changed
    strrev(reversedWord);

    // A palindrome reads the same forwards and backwards
    if (strcmp(originalWord, reversedWord) == 0)
    {
        cout << originalWord << " is a palindrome" << endl;
    }
    else
    {
        cout << originalWord << " is not a palindrome" << endl;
    }
    return 0;
}
