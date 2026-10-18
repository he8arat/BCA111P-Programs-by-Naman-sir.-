#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstName[50];
    char lastName[50];
    char fullName[120];

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    strcpy(fullName, firstName);             // start with the first name
    strcat(fullName, " ");                   // add a space between the names
    strcat(fullName, lastName);              // add the last name

    cout << "Full name = " << fullName << endl;
    return 0;
}
