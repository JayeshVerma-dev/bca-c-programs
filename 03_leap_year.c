#include<stdio.h>
int main()
{
int a ;
printf("Enter the Year to check if its leap or not : ");
scanf("%d",&a);
if ((a%400==0) || (a%4==0 && a%100!=0))
printf("%d is a Leap Year",a);
else
printf("%d is not a Leap Year",a);
return 0;
}
