# c-assignment3
// question 47
#include<iostream>
using namespace std;
int main()
{
 int a,x,pr=1;
 cout<<"Enter a number : ";
 cin>>a;
 if(a==1)
 {
  pr=0;

 }
 else
 {
  for(x=2;x<=a/2;x++)
  {
     if(a%x==0)
     {
       pr=0;
       break;

     }
   }
  }


   if(pr==1)
    cout<<"Number is  prime";
   else
    cout<<"Number is not prime";

 return 0;
}
