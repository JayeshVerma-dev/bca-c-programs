#include<stdio.h>
#include<conio.h>

void swp(int *a, int *b) 
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

int main() 
{
int num1, num2;

printf("Enter First number : ");
scanf("%d", &num1);
printf("Enter Second number : ");
scanf("%d", &num2);

printf("\nBefore swapping:");
printf("\nFirst number : %d", num1);
printf("\nSecond number : %d", num2);

swp(&num1, &num2);

printf("\n\nAfter swapping:");
printf("\nFirst number : %d", num1);
printf("\nSecond number : %d", num2);
return 0;
}