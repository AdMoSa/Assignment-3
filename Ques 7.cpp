#include <iostream>
using namespace std;

int main()
{
	char a;
    cout << "Enter the character: ";
    cin >> a;
	if ((a >= 65 && a <= 90) ^ (a >= 97 && a <= 122))
		cout << "Its a character.";
	else
		cout << "Its not a character.";
  
  return 0;
  
}
