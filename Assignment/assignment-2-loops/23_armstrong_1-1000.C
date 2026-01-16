#include<stdio.h>
int main()
{
int a,b,c,d;
printf("The Armstrong Numbers between 1 to 1000 are : \n");
for(a=100;a<=1000;a++)
{   
 c = 0;
for(b=a;b!=0;b/=10)
{
d = b % 10;
c += d*d*d;
}
if (c == a)
{
printf("%d ", a);
}
}
printf("\n");
return 0;
}
