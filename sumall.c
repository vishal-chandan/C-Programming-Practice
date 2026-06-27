#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Value of n = ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum+i;
        i++;
    }
    printf("\nSum of all integers = %d",sum);
}