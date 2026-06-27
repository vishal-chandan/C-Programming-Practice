#include<stdio.h>
#include<conio.h>
 int gcd(int a,int b)
   {
     int d,i;
     d = (a<b)?a:b;
     for(i=d;i>=1;i--)
     {
        if(a%i==0&&b%i==0)
        {
            return i;break;
        }
     }   
   }
void main()
{
    int x,y;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
   printf("HCF of %d and %d = %d",x,y,gcd(x,y));
}