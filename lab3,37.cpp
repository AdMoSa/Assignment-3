# c-assignment3
// question 37
#include<iostream>
using namespace std;
int main()
{
 int n,di,rev;
 rev=0;
 cout<<"Enter any number : ";
 cin>>n;
 while(n!=0)
 {

   di=n%10;
   rev=rev*10+di;
   n=n/10;
 }
 cout<<endl<<"the reverse of the numbers : "<<rev;
 return 0;
}
