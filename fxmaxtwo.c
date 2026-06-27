#include<stdio.h>
#include<conio.h>
int max(int x,int y)
    {
        return (x>y)?x:y;
    }
void main()
{
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("Max = %d",max(a,b));
}