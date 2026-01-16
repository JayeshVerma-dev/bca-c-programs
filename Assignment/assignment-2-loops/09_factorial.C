#include<stdio.h>
int main()
{
int a,b,n;
printf("Enter the number to find its factorial : ");
scanf("%d",&a);
if (a!=0||a>0)
{n=a;
for (b=a;a>1;a--)
{if (a!=0||a>0)
{b=b*(a-1);}}
printf("%d is the factorial of %d",b,n);}
else
{printf("Please enter positive number...");}
return 0;
}