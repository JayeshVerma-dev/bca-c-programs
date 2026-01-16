#include<stdio.h>
int main()
{
int a,b,c=1,n=0;
printf("Enter a number and then enter its exponent :\n");
scanf("%d%d",&a,&b);
do{
c=c*a;
n+=1;}while(n!=b);
printf("%d to the power %d is : %d",a,b,c);
return 0;
}