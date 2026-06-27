#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        d=a;
    }
    else
    {
        d=b;
    }
    if(d>c)
    {
        printf("%d is largest ",d);
    }
    else
    {
        printf("%d is largest ",c);
    }
}