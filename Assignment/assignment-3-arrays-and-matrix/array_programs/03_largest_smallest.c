#include<stdio.h>
int main()
{int a[5],b,c,d,e;
printf("Enter 5 different Numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
for(b=0;b<5;b++)
{d=0;
e=0;
for(c=0;c<5;c++)
{if(a[b]>a[c])
{d+=1;}
if(a[b]<a[c])
{e+=1;}}
if(d==4)
{printf("\n%d is the Largest...",a[b]);}
if(e==4)
{printf("\n%d is the Smallest...",a[b]);}
}
return 0;
}