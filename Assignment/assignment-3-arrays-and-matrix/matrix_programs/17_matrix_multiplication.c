#include<stdio.h>
int main()
{
int a[3][3],x[3][3],b,c,e=0;
printf("For 1st Matrix...\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&a[b][c]);
}}
printf("For 2nd Matrix...\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&x[b][c]);
}}
printf("\nThe Product of both the Matrices will be :\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++) 
{printf("%d\t",a[b][0]*x[0][c]+a[b][1]*x[1][c]+a[b][2]*x[2][c]);} 
printf("\n");}
return 0;
}