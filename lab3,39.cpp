# c-assignment3
// question 
#include <iostream>
using namespace std;
int main() 
{
     int a,num,di,x;
     cout<<"Enter the number :  ";
     cin>>a;
     for(int i=0;i<10;i++)
     {
        x=0;
	num=a;
	while(num>0)
	{
         di=num%10;
       	 num=num/10;
	 if(di==i)
	 {
           x++;
         }
        }
       cout<<i<<" comes "<<x<<" times in "<<a<< " number "<<endl;
    }
	
    return 0;
}
