#include<stdio.h>
int main()
{
int a[3][3],b,c,d=0;
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a Number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&a[b][c]);
d+=a[b][c];}}
printf("\nSum of all elements of entered matrix is : %d",d);
return 0;
}