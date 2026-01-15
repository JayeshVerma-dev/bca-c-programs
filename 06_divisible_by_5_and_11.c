#include<stdio.h>
int main()
{
int a ;
printf("Enter a number to check if it is divible by 5 and 11 or not : ");
scanf("%d",&a);
if (a%5==0&&a%11==0)
printf("YES, %d is divisible by both numbers...",a);
else if (a%5==0&&a%11!=0)
printf("NO, %d is divisible by 5 but not 11...",a);
else if (a%5!=0&&a%11==0)
printf("NO, %d is divisible by 11 but not 5...",a);
else
printf("NO, %d is not divisible by both numbers...",a);
return 0;
}