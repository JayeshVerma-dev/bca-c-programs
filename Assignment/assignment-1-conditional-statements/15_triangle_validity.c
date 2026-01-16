#include<stdio.h>
#define SUM_OF_ALL_ANGLES 180
int main()
{
int a,b,c;
printf("Enter the three angles of a \
triangle to know if its valid or not.\nEnter from here : ");
scanf("%d%d%d",&a,&b,&c);
if ((a+b+c)==SUM_OF_ALL_ANGLES)
printf("YES, this is an Valid Triangle...");
else
printf("NO, this is not an Valid Triangle...");
return 0;
}