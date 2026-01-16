#include<stdio.h>
int main()
{int a[5],b,c;
printf("Enter 5 numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
printf("Enter the number that you want to know the position of : ");
scanf("%d",&c);
for(b=0;b<5;b++)
{if (a[b]==c)
{printf("%d is present at position %d in the list...\n",c,b+1);}}
return 0;
}