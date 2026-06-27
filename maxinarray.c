#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,r;
    printf("Enter limit = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
             if(a[i]<a[j])
             {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
        }  
    }
    printf("Which largest number does you want = ");
    scanf("%d",&r);
    printf("%d largest number = %d",r,a[r-1]);

}