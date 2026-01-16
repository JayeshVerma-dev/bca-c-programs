#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter a number to check if its Perfect or not : ");
scanf("%d",&a);
for(b=1;b<a;b++)
{if (a%b==0)
{c+=b;}}
if (c==a && a!=0 && a!=1)
{printf("%d is a Perfect Number...",a);}
else
{printf("%d is not a Perfect Number...",a);}
return 0;
}