#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,count=0;
    printf("Enter number = ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        count++;
    }
    printf("Digits in this number = %d",count);
}