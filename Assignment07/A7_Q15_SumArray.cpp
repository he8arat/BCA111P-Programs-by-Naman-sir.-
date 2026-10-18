#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char mainText[200];
    char checkText[100];

    cout << "Enter the main string: ";
    cin.getline(mainText, 200);
    cout << "Enter the string to check: ";
    cin.getline(checkText, 100);

    // Only yes/no is needed here, so we just check whether strstr found anything
    if (strstr(mainText, checkText) != NULL)
    {
        cout << "Yes, \"" << checkText << "\" is present in the string" << endl;
    }
    else
    {
        cout << "No, \"" << checkText << "\" is not present in the string" << endl;
    }
    return 0;
}
