#include<stdio.h>
int main()
{
int a[10],b;
printf("Enter 10 Values for the Array :\n");
for(b=0;b<10;b++)
{scanf("%d",&a[b]);}
printf("The elements of entered Array are : \n");
for(b=0;b<10;b++)
{printf("%d\t",a[b]);}
return 0;
}
