#include<stdio.h>
int main ()
{
int a ;
printf("Enter the number to check if its greater than 10 and less than 50 \
or not : ");
scanf("%d",&a);
if (a>10 && a<50)
printf("YES, %d is greater than 10 and less than 50...",a);
else
printf("NO, %d is not greater than 10 and less than 50...",a);
return 0;
}