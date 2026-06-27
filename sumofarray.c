#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter limit = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    printf("Sum of all elements = %d",sum);
}