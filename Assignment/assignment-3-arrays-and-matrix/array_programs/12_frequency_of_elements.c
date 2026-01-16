#include<stdio.h>
int main()
{
int a[5],b,c,d,tmp=0;
printf("Enter 5 numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
for(b=0;b<5;b++)
{d=0;
tmp=0;
for(c=0;c<5;c++)
{if(a[b]==a[c])
{d++;}
}
for(c=b+1;c<5;c++)
{if(a[b]==a[c])
{tmp++;}}
if(tmp==0)
{printf("The frequency of %d is %d...\n",a[b],d);}
}
return 0;
}