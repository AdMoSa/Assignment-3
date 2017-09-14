#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the sides of the triangles: ";
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << "Its an Equilateral triangle.";
	else if ((a == b) || (b == c) || (a == c))
		cout << "Its an Isoceles triangle.";
	else
		cout << "Its an Scalene triangle.";
  
	return 0;
}
