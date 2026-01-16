#include<stdio.h>
int main()
{
int a ;
printf("Enter the number to check if its Positive, Negative or Zero : ");
scanf("%d",&a);
if(a>0)
printf("%d is Positive...",a);
else if (a<0)
printf("%d is Negative...",a);
else
printf("%d is Zero...",a);
return 0;
}
