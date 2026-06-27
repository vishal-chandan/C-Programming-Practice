#include<stdio.h>
#include<conio.h>
int fact(int x)
    {
        int i,f=1;
        for(i=1;i<=x;i++)
        {
            f = f*i;
        }
        return f;
    }
void main()
{
    int n;
    printf("Enter number = ");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,fact(n));
}