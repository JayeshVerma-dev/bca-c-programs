#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter the number till which you'll get the Sum of Square Series : ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{c+=(b*b);}
printf("The sum of Square Series till %d is %d : ",a,c);
return 0;
}

