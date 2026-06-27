#include<stdio.h>
#include<conio.h>
 int sum(int x, int y)
    {
        return x+y;
    }
void main()
{
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
   printf("Sum = %d",sum(a,b));
    
}
