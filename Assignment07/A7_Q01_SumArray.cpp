#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char inputText[100];

    cout << "Enter a string: ";
    cin.getline(inputText, 100);     // read the whole line, including spaces

    cout << "Length of the string = " << strlen(inputText) << endl;
    return 0;
}
