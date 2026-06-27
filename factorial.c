#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,fact=1;
    printf("Enter number = ");
    scanf("%d",&n);
   /*/ for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }*/
     while(i<=n)
     {
        fact = fact*i;
        i++;
     }
    printf("It's factorial = %d",fact);

}