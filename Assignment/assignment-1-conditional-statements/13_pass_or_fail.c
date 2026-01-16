#include<stdio.h>
int main()
{
int a ;
printf("Enter the marks of your child : ");
scanf("%d",&a);
if (a>=40&&a<=100)
printf("Congratulations! your child has passed.");
else if (a>100)
printf("Invalid marks entered.");
else
printf("Sorry, Your child has failed.");
return 0;
}