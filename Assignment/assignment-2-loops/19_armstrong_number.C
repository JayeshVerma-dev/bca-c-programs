#include<stdio.h>
int main()
{
int a,b,c,d,e,i,r=0;
printf("Enter a number to check if its Armstrong number : ");
scanf("%d",&a);
i=a;
d=a;
for(c=0;a!=0;c++)
{b=a%10;
a/=10;}
a=d;
while(a!=0)
{b=a%10;
a/=10;
d=1;
for(e=1;e<=c;e++)
{d*=b;}
r+=d;
}
if(i==r)
{printf("YES %d is an Armstrong Number...",i);}
else
{printf("NO %d is not an Armstrong Number...",i);}
return 0;
}


