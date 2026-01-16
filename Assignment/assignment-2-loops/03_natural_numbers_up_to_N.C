#include<stdio.h>
int main()
{
int a=1,n;
printf("Enter the natural number to stop counting at : ");
scanf("%d",&n);
while(a<=n)
{printf("%d\n",a);
a++;}
return 0;
}