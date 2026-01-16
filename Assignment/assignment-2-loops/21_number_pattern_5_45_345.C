#include<stdio.h>
int main()
{
int a=5,b,c;
for(b=5;b>=1;b--)
{while(a>=b)
{printf("%d",a);
a--;}
printf("\n");
a=5;}
return 0;
}