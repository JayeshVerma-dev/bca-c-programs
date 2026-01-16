#include<stdio.h>
int main()
{
int a[3][3],b,c,d;
printf("For 1st Matrix...\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&a[b][c]);
}}
printf("\nFor 2nd Matrix...\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&d);
a[b][c]+=d;
}}
printf("Sum of Both the Matrices will be :\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("%d\t",a[b][c]);}
printf("\n");}
return 0;
}