#include<stdio.h>
int main ()
{
char a ;
printf("Enter a alphabet to know if its Lowercase or Uppercase : ");
scanf("%c",&a);
if (a>='A'&&a<='Z')
printf("%c is Uppercase...",a);
else if (a>='a'&&a<='z')
printf("'%c' is Lowercase...",a);
else
printf("'%c' is not a Alphabet...",a);
return 0;
}