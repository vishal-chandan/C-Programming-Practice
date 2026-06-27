#include<stdio.h>
#include<conio.h>
 void prime(int n)
   { 
        int i,flag=0;
    if(n>2)
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;break;
            }
        }
    }
    else if(n==2)
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
    
    if(flag==0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime number");
    }
   }
void main()
{
    int x;
    printf("Enter a natural number = ");
    scanf("%d",&x);
   prime(x);
}