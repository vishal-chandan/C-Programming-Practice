#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,b;
    printf("Rows = ");
    scanf("%d",&a);
    printf("Columns = ");
    scanf("%d",&b);
    int c[a][b],d[a][b],e[a][b];
    printf("Enter 1st matrix elements\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    printf("Enter 2nd matrix elements\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    printf("Addition of matrices\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           e[i][j] = c[i][j] + d[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d  ",e[i][j]);
        }
        printf("\n");
    }
    

}