#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char originalText[100];

    cout << "Enter a string: ";
    cin.getline(originalText, 100);

    strrev(originalText);                    // reverses the string in place

    cout << "Reversed string = " << originalText << endl;
    return 0;
}
