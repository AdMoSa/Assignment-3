# c-assignment3
// question 57
#include <iostream>
using namespace std;
int main() 
{
   int a=0,b=1,c,n,i;
   cout<<"Enter a positive number : ";
   cin>>n;
   cout<<"the fibonacii series is \n";  
   cout<<b<<"   ";
   for(i=1;i<=n;i++)
   {          
      c=a+b;
      cout<<c<<"   ";
      a=b;
      b=c;	
   }
            
   return 0;
}
