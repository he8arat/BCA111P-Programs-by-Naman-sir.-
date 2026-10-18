#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char mainText[200];
    char subText[100];

    cout << "Enter the main string: ";
    cin.getline(mainText, 200);
    cout << "Enter the substring to find: ";
    cin.getline(subText, 100);

    // strstr returns the address where the substring starts, or NULL if not found
    char *matchPointer = strstr(mainText, subText);

    if (matchPointer != NULL)
    {
        int matchIndex = matchPointer - mainText;
        cout << "Substring found at index " << matchIndex << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }
    return 0;
}
