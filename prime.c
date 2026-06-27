#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a natural number = ");
    scanf("%d",&n);
    if(n>2)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                break;
            }
            else
            {
                printf("%d is a prime number",n);
                break;
            }
        }
    }
    else if(n==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}