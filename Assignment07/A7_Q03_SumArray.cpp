#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char originalText[100];
    char copiedText[100];

    cout << "Enter a string: ";
    cin.getline(originalText, 100);

    strcpy(copiedText, originalText);       // copy original into copiedText

    cout << "Original string = " << originalText << endl;
    cout << "Copied string = " << copiedText << endl;
    return 0;
}
