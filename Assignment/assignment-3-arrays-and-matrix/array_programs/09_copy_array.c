#include<stdio.h>
int main ()
{int a[5],b,c[5];
printf("Enter 5 numbers for 1st Array :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);
c[b]=a[b];}
printf("Second Array will be :\n");
for(b=0;b<5;b++)
{printf("%d\n",c[b]);}
return 0;
}
