#include<stdio.h>
int main()
{
int a=1,b,c;
for(b=1;b<=5;b++)
{while(a<=b)
{printf("%d",a);
a++;}
printf("\n");
a=1;}
return 0;
}