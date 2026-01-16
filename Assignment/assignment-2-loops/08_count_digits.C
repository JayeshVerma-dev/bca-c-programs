#include<stdio.h>
int main()
{
int a,b,c,x,y;
printf("Enter the number to start counting from : ");
scanf("%d",&a);
printf("Enter the number of shift : ");
scanf("%d",&b);
printf("Enter the number to stop counting at : ");
scanf ("%d",&c);
if (a<=c)
for (x=a;x<=c;x=y)
{printf("%d\n",x);
y=x+b;}
else
{printf("Please enter valid numbers according to the sequence ... ");}
return 0;
}