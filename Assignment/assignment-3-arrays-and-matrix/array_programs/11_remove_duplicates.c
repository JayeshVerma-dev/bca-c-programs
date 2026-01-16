#include<stdio.h>
int main()
{int a[10],b,c,d,e=0;
printf("Enter 10 numbers :\n");
for(b=0;b<10;b++)
{scanf("%d",&a[b]);}
for(b=0;b<10-e;b++)
{for(c=b+1;c<10-e;c++)
{if(a[b]==a[c])
{for(d=c;d<10-e;d++)
{a[d]=a[d+1];}
c--;
e++;}}}
printf("After Removing the Duplicate elements, the updated Array is :\n");
for(b=0;b<10-e;b++)
{printf("%d\n",a[b]);}
return 0;
}