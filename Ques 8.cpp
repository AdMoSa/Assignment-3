#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter the character: ";
	cin >> ch;
	switch (ch)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':

	cout << "Its a vowel."; break;
	default:
	cout << "Its a consonant";
	}
return 0;
}
