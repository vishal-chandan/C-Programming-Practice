#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("\nEnter value of b = ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swap \n");
    printf("Value of a = %d",a);
    printf("\nValue of b = %d",b);

}