#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter a natural number to get its reverse : ");
scanf("%d",&a);
while (a!=0)
{b=a%10;
c=(c*10)+b;
a/=10;}
printf("The entered number in reverse will be : %d",c);
return 0;
}
