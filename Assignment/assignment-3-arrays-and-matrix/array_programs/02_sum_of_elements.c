#include<stdio.h>
int main()
{
int a[10],b,c=0;
printf("Enter 10 numbers to Sum :\n");
for(b=0;b<10;b++)
{scanf("%d",&a[b]);}
for(b=0;b<10;b++)
{c+=a[b];}
printf("Sum of all Numbers is : %d",c);
return 0;
}