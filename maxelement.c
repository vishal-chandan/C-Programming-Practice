#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,max;
    printf("Enter limit = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        int temp;
        if(a[0]<a[i])
        {
            temp = a[0];
            a[0] = a[i];
            a[i] = a[0];
        }
    }
    printf("Max element = %d",a[0]);

}