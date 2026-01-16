#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter the natural number to which you want the average of : ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{printf("%d\n",b);
c=c+b;}
printf("Average of these numbers is : %d",c/a);
return 0;
}

