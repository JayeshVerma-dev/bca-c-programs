#include<stdio.h>
int main()
{
int a[5],b,c;
printf("Enter 5 Numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
printf("If you want to replace an number with a new value...\nThen Enter its position and value one by one :\n");
scanf("%d",&b);
for(c=4;c>b-1;c--)
{a[c]=a[c-1];}
scanf("%d",&c);
a[b-1]=c;
printf("The Updated list of numbers is :\n");
for(b=0;b<5;b++)
{printf("%d\n",a[b]);}
return 0;
}