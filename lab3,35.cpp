# c-assignment3
//question 35
#include<iostream>
using namespace std;
int main()
{
 int n,di,sum;
 sum=0;
 cout<<"Enter any number : ";
 cin>>n;
 while(n!=0)
 {

   di=n%10;
   sum=sum+di;
   n=n/10;
 }
 cout<<endl<<"the sum of digits of the numbers : "<<sum;
 return 0;
}
