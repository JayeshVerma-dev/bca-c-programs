#include<stdio.h>
int main ()
{
int a ;
printf("Enter a Digit to know if its multiple of 3 or 7 : ");
scanf("%d",&a);
if (a%3==0&&a%7==0)
printf("%d is a multiple of 3 & 7...",a);
else if (a%3==0||a%7==0)
printf("%d is a multiple of 3 or 7...",a);
else
printf("%d is not a multiple of 3 or 7...",a);
return 0;
}