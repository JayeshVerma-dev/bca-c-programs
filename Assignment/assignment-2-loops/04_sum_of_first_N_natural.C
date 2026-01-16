#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter the number till which you want the sum of all natural numbers : ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{printf("%d\t",b);
c=c+b; }
printf("\nThe sum of all natural numbers till %d is : %d",a,c);
return 0;
}