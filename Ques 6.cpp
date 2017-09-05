#include <iostream>
using namespace std;

main()
{
 int a,x;
 cout << "Enter year: ";
 cin >> a;
 x=a-2016; //2016 was the last leap year
 if(x%4==0)
    cout << "This is a leap year";
 else
    cout << "This is not a leap year";
}
