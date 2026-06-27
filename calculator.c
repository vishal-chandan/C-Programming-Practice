#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,d;
    int c;
    printf("Enter 1st value = ");
    scanf("%f",&a);
    printf("\nEnter 2nd value = ");
    scanf("%f",&b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nChoose option in whole number = ");
    scanf("%d",&c);
    switch (c)
    {
    case 1 : d=a+b;printf("Answer = %.2f",d);break;
    case 2 : d=a-b;printf("Answer = %.2f",d);break;
    case 3 : d=a*b;printf("Answer = %.2f",d);break;
    case 4 : d=a/b;printf("Answer = %.2f",d);break;
    default: printf("Invalid option");
        break;
    }
}