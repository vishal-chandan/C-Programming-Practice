#include<stdio.h>
#include<conio.h>
int power(int x)
    {
        return x*x;
    }
void main()
{
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    printf("Square of %d = %d",a,power(a));
}