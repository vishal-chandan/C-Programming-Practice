#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("Enter celsius = ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("Fahrenight = %.2f",f);
}