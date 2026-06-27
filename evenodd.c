#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is a even number",n);
    }
    else
    {
        printf("%d is a odd number",n);
    }
}