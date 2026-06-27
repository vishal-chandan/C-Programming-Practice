#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,d,rev=0;
    printf("Enter number = ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d = i%10;
        rev = rev*10+d;
    }
    printf("Number reverse = %d",rev);
}