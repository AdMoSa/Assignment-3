#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter sell price of the commodity: ";
	cin >> a;
	cout << "Enter cost price of the commodity: ";
	cin >> b;
	c = a - b;
	if (c > 0)
		cout << "Profit = " << c;
	else if (c < 0)
		cout << "Loss = " << c;
	else
		cout << "No Profit or loss.";
	
	return 0;
}
