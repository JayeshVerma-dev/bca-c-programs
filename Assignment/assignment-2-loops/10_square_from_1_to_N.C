#include<stdio.h>
int main()
{
int a,b;
printf("Enter the number till which you want the squares of numbers : ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
printf("%d\n",b*b);
}
return 0;
}