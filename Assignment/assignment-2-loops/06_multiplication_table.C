#include<stdio.h>
int main()
{
int a,b=1;
printf("Enter the number you want the table of : ");
scanf("%d",&a);
do{
printf("%d X %d = %d\n",a,b,a*b);
b++;}while(b<=10);
return 0;
}