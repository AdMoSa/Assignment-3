# c-assignment3
// question 46
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int x,y,lm,c,i;
    cout<<"enter two numbers\n";
    cin>>x>>y;
    for(i=1;i<=x && i<=y;i++)
    {
  	if((x%i==0) && (y%i==0))
        c=i;
    }
    lm=(x*y)/c;
    cout<<"lcm of two numbers is "<<lm;
    return 0;        
}            
    
