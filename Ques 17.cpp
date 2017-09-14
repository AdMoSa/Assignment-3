#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, d, e, rone, rtwo;
	cout << "For the equation of the form- ax^2 + bx + c" << endl;
	cout << " Enter the variables a, b, c: ";
	cin >> a >> b >> c;
	d = (b*b) - 4 * a*c;
	e = pow(d, 0.5);
	rone = (-b + e) / (2 * a);
	rtwo = (-b - e) / (2 * a);
	if (d < 0)
		cout << "No real roots possible.";
	else
		cout << "The roots are" << rone << "and" << rtwo;
	
	return 0;
}
