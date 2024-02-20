#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100] = "apple";
    char b[100];

    // strlen()
    cout << "length of string a is: " << strlen(a) << endl;

    // strcpy();
    strcpy(b, a);
    cout << b << endl;

    // strcat();
    char c[] = "Ranjeet ";
    char d[] = "Singh";
    strcpy(b, strcat(c, d));
    cout << b << endl;

    // strcmop() returns 0 if same
    cout << strcmp(a, b) << endl;

    return 0;
}