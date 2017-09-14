#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "Enter the basic salary : ";
	cin >> a;
	if (a <= 10000)
	{
		c= (a * 20) / 100;
		d= (a * 80) / 100;
		b = a + c + d;
		cout << "Gross salary : " << b;
	}
	else if (a>10000 && a <= 20000)
	{
		c= (a * 25) / 100;
		d = (a * 90) / 100;
		b = a + c+ d;
		cout << "Gross salary : " << b;
	}
	else
	{
		c= (a * 30) / 100;
		d = (a * 95) / 100;
		b = a + c+ d;
		cout << "Gross salary : " << b;
	}
	
	return 0;
}
