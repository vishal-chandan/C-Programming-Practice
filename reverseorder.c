#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter limit = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers in reverse order\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}