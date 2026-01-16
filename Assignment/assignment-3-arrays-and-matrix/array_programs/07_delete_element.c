#include<stdio.h>
int main()
{
int a[5],b,c;
printf("Enter 5 numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
printf("Enter the Number's Index that you want to Delete from the list : ");
scanf("%d",&c);
printf("The updated list is :\n");
for(b=0;b<4;b++)
{if(b>=c-1)
{a[b]=a[b+1];}
printf("%d\n",a[b]);}
return 0;
}
