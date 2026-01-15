#include<stdio.h>
int main ()
{
int a ;
printf("Enter a Digit to know if its within the range of 1 to 100 or not : ");
scanf("%d",&a);
if (a>=1&&a<=100)
printf("%d Is within the range...",a);
else
printf("%d Is out of the range...",a);
return 0;
}