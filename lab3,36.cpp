# c-assignment3
// question 36
#include<iostream>
using namespace std;
int main()
{
 int n,di,pro;
 pro=1;
 cout<<"Enter any number : ";
 cin>>n;
 while(n!=0)
 {

   di=n%10;
   pro=pro*di;
   n=n/10;
 }
 cout<<endl<<"the product of digits of the numbers : "<<pro;
 return 0;
}
