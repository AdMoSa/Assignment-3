#include <iostream>
using namespace std;

main()
{
 int x,y,z,a,max;
 cout << "Enter 1st number: ";
 cin >> x;
 cout << "Enter 2nd number: ";
 cin >> y;
 cout << "Enter 3rd number: ";
 cin >> z;
 if(x>=y)
    a = x;
 else
    a = y;
 if(a>=z)
    max = a;
 else
    max = z;
 cout << "Maximum is: " << max;
}
