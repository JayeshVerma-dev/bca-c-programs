#include<stdio.h>
void square(int a);

int main()
{
int x;
printf("Enter a number to get its square : ");
scanf("%d",&x);
square(x);
return 0;
}

void square(int a)
{
printf("Square of entered number is : %d",a*a);
}