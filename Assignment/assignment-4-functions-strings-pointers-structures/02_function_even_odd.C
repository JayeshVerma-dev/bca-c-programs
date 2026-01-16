#include<stdio.h>
int eo(int x)
{	
if(x%2==0)
{return 1;}
else 
{return 0;}
}

int main()
{
int a;
printf("Enter a number : ");
scanf("%d",&a);
if(eo(a))
{printf("Entered number is Even");}
else
{printf("Entered number is Odd");}
return 0;
}