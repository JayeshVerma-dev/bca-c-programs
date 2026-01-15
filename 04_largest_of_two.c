#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers to check which one is largest :\n");
scanf("%d%d",&a,&b);
if (a>b)
printf("%d is the Largest...",a);
else if (a<b)
printf("%d is the Largest...",b);
else
printf("Both numbers are equal...");
return 0;
}