#include<stdio.h>
int main()
{int a[5],b,c,d,e;
printf("Enter 5 different numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
for(b=0;b<5;b++)
{d=0;
e=0;
for(c=0;c<5;c++)
{if(a[b]>a[c])
{d++;}
if(a[b]<a[c])
{e++;}}
if(d==3)
{printf("\n%d is the 2nd Largest element in the list...",a[b]);}
if(e==3)
{printf("\n%d is the 2nd Smallest element in the list...",a[b]);}} 
return 0;
}