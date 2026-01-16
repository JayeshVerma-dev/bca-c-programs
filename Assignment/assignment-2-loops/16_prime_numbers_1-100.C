#include<stdio.h>
int main()
{
int a,b,n=0;
for(a=2;a<=100;a++)
{for(b=1;b<=a;b++)
{if(a%b==0){n++;}}
if(n<=2)
{printf("%d\n",a);}
n=0;}
return 0;
}