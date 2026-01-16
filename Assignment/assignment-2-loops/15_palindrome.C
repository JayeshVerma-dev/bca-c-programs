#include<stdio.h>
int main()
{
int a,b,c=0,d;
printf("Enter a number to check if its Palindrome or not : ");
scanf("%d",&a);
d=a;
while(a!=0)
{b=a%10;
a=a/10;
c=(c*10)+b;}
if(d==c)
{printf("YES %d is a Palindrome Number...",d);}
else
{printf("NO %d is not a Palindrome Number...",d);}
return 0;
}