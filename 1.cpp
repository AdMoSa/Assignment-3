#include <iostream>
using namespace std;

main()
{
  char a;
  cout << "Enter a character: ";
  cin >> a;
 
  if ((a>=65 && a<=90)||(a>=97 && a<=122))
     cout << "The character is an alphabet.";
 
  else if (a>=48 && a<=57)
     cout << "The character is a digit.";
 
  else
     cout << "It is a special character.";
}
