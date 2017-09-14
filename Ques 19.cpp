#include<iostream>
using namespace std;

int main()
{
	float a, b, c, d, e, f, g, h, i;
	cout << "Enter marks in Phy: ";
	cin >> a;
	cout << "Enter marks in Chem: ";
	cin >> b;
	cout << "Enter marks in Math: ";
	cin >> c;
	cout << "Enter marks in Bio: ";
	cin >> d;
	cout << "Enter marks in Comp: ";
	cin >> e;
	cout << "Enter max marks: ";
	cin >> f;
	g = (a + b + c + d + e);
	h = g / 5;
	i = (g * 100) / (5 * f);
	cout << "Percentage: " << i << "%";

	if (i >= 90)
		cout << "Grade A ";
	else if (i >= 80)
		cout << "Grade B";
	else if (i >= 70)
		cout << "Grade C";
	else if (i >= 60)
		cout << "Grade D";
	else if (i >= 40)
		cout << "Grade E";
	else
		cout << "Grade F";
	
	return 0;
}
