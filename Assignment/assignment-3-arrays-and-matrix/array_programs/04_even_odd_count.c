#include<stdio.h>
int main()
{
int a[5],b,c=0,d=0;
printf("Enter 5 numbers :\n");
for(b=0;b<5;b++)
{scanf("%d",&a[b]);}
for(b=0;b<5;b++)
{if (a[b]%2==0)
{c+=1;}
else
{d+=1;}}
printf("There are %d Odd Numbers and %d Even Numbers in this list...",d,c);
return 0;
}
