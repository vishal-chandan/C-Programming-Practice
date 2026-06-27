#include<stdio.h>
#include<conio.h>
void main()
{
    float p,c,m,e,h,t,tm;
    printf("Enter marks\n");
    printf("Physics = ");
    scanf("%f",&p);
    printf("\nChemistry = ");
    scanf("%f",&c);
    printf("Maths = ");
    scanf("%f",&m);
    printf("English = ");
    scanf("%f",&e);
    printf("Hindi = ");
    scanf("%f",&h);
    tm = p+c+m+e+h;
    printf("\nTotal marks = %.2f",tm);
    t = tm/5;
    printf("\nPercentage = %.2f\n",t);
    if(t>=80)
    {
        printf("Grade - A");
    }
    else if(60<t<=79)
    {
        printf("Grade - B");
    }
    else if(40<t<=59)
    {
        printf("Grade - C");
    }
    else if(33<t<=39)
    {
        printf("Grade - D");
    }
    else
    {
        printf("Fail");   
    }
}