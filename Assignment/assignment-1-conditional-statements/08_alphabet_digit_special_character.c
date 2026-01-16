#include<stdio.h>
int main ()
{
char a ;
printf("Enter any single Character to know if its an Alphabet, Digit or\nan Special Character : ");
scanf("%c",&a);
if ((a>='A'&& a<='Z') || (a>='a'&& a<='z'))
{printf("%c is an Alphabet...",a);}
else if (a>='0'&&a<='9')
{printf("%c is a Digit...",a);}
else if (((a>='!')&&(a<='/'))||((a>=':')&&(a<='@'))||((a>='[')&&(a<='\''))||((a>='{')&&(a<='~')))
{printf("%c is a Symbol or Special Character...",a);}
else
{printf("%c is None of them...",a);}
return 0;
}
