#include<stdio.h>
int main() 
{
int num;
int *p;    
printf("Enter an integer: ");
scanf("%d", &num);
p = &num;    
printf("\nValue of Variable : %d", *p);
printf("\nAddress of Varialbe : %u", p);
return 0;
}