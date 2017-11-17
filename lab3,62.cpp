# c-assignment3
// question 62
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
   int bi,de=0,di,i=0;
   cout<<" Enter the binary number ";
   cin>>bi;
   while(bi!=0)
   {
     di=bi%10;
     bi=bi/10;
     de=de+pow(2,i)*di;
     i++;
   }
   int cp,a,n;
   char hex[100],hx;
   cp=de;
   i=1;
   while(cp!=0)
   {
     cp=cp/16;
     i++;
   }
   n=i;
   while(de!=0)
   {
     di=de%16;
     de=de/16;
     switch(di)
     {
        case 1:hx='1';break;
    	case 2:hx='2';break;
    	case 3:hx='3';break;
    	case 4:hx='4';break;
    	case 5:hx='5';break;
    	case 6:hx='6';break;
    	case 7:hx='7';break;
    	case 8:hx='8';break;
    	case 9:hx='9';break;
    	case 10:hx='A';break;
    	case 11:hx='B';break;
    	case 12:hx='C';break;
    	case 13:hx='D';break;
    	case 14:hx='E';break;
    	case 15:hx='F';break;
    	default:break;
     }
     hex[i]=hx;
     i--;
    }
    for(i=0;i<=n;i++)
    cout<<hex[i];
    return 0;
}
