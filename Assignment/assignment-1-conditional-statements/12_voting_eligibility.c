#include<stdio.h>
int main ()
{
int a ;
printf("Welcome to Vote Eligibility Portal...\nEnter your age to know if you are eligible to vote : ");
scanf("%d",&a);
if (a>=18)
printf("Congratulations! You are eligible to Vote.");
else
printf("Sorry, you are not eligible to Vote.");
return 0;
}