# c-assignment3
// question 61
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
   int bi,di,de=0,i=0;
   cout<<" Enter the binary number :  ";
   cin>>bi;
   while(bi!=0)
   {
     di=bi%10;
     bi=bi/10;
     de=de+pow(2,i)*di;
     i++;
   }
   cout<<" \n The decimal equivalent is :  "<<de;
   return 0;
}
