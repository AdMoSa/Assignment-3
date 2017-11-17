# c-assignment3
//question 44
#include<iostream>
using namespace std;
int main()
{
 int x,n,f;
 f=1;
 cout<<"Enter a number : ";
 cin>>n;
 for(x=1;x<=n;x++)
 {
   f=f*x;
 }
 cout<<"Factorial of "<<n<<"="<<f;
 return 0;
}
