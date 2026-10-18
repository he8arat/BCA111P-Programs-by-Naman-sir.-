#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstPart[100];
    char secondPart[100];
    char combinedText[200];

    cout << "Enter first string: ";
    cin.getline(firstPart, 100);
    cout << "Enter second string: ";
    cin.getline(secondPart, 100);

    strcpy(combinedText, firstPart);         // start with the first string
    strcat(combinedText, secondPart);        // add the second string to the end

    cout << "Concatenated string = " << combinedText << endl;
    return 0;
}
