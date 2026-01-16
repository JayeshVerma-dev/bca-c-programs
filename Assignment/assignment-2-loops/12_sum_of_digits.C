#include<stdio.h>
int main()
{
int a,b=0;
printf("Enter the number you want sum of digits of : ");
scanf("%d",&a);
while(a!=0)
{
b=b+a%10;
a=a/10;
}
printf("Sum of digits of the given number is : %d",b);
return 0;
}