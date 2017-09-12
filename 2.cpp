#include <iostream>
using namespace std;

int main()
{
 char a;
 cout << "Enter an alphabet: ";
 cin >> a;
 
 if (a>=65 && a<=90)
    cout << "Uppercase alphabet.";
 else if (a>=97 && a<=122)
    cout << "Lowercase alphabet.";
 else
    cout << "This is not an alphabet.";
 
 return 0;
}
