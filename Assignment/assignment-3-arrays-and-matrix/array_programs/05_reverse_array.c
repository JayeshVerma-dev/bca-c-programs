#include<stdio.h>
int main()
{
int a[5],b,c[5];
printf("Enter 5 Numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
for(b=0;b<5;b++)
{c[b]=a[4-b];}
printf("The list of entered Numbers in reverse will be :\n");
for(b=0;b<5;b++)
{printf("%d\t",c[b]);}
return 0;
}