#include<stdio.h>
int main()
{
int a[3][3],b,c;
printf("To Display a 3X3 MATRIX...\n\n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("Enter a Number for (%d,%d) position : ",b+1,c+1);
scanf("%d",&a[b][c]);
}}
printf("The Entered Matrix is : \n");
for(b=0;b<3;b++)
{for(c=0;c<3;c++)
{printf("%d\t",a[b][c]);}
printf("\n");}
return 0;
}