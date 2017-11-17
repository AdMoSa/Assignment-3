# c-assignment3
// question 45
#include<iostream>
using namespace std;
int main()
{
     int x,y,i,h;
     cout<<"Enter two numbers : ";
     cin>>x>>y;
     for(i=x;i>0;i--)
     {
       if(x%i==0 && y%i==0)
       {  
          h=i;
          cout<<"hcf of two numbers is "<<h;
          break;
       }
      }
      return 0;
            
}            
  
