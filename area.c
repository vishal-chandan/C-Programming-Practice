#include<stdio.h>
#include<conio.h>
void main()
{
    float l,b,a;
    printf("Enter length = ");
    scanf("%f",&l);
    printf("\nEnter breadth = ");
    scanf("%f",&b);
    a = l*b;
    printf("\nArea of rectangle = %.2f",a);
}