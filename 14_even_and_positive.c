#include<stdio.h>
int main()
{
int a;
printf("Enter a number to check if its Even and Positive or not : ");
scanf("%d",&a);
if (a%2==0&&a>0)
{printf("%d is Even and Positive...",a);}
else if (a%2==0&&a<0)
{printf("%d is Even but not Positive...",a);}
else if (a%2!=0&&a>0)
{printf("%d is not Even but Positive...",a);}
else
{printf("%d is neither Even nor Positive...",a);}
return 0;
}