#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,si;
    printf("Enter amount = ");
    scanf("%d",&p);
    printf("\nEnter rate = ");
    scanf("%d",&r);
    printf("\nEnter time = ");
    scanf("%d",&t);
    si = p*r*t/100;
    printf("\nSimple Interest = %d",si);
    
}