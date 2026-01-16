#include<stdio.h>
int main ()
{
char a ;
printf("Enter an Alphabet to know if its a Vowel or a Consonant : ");
scanf("%c",&a);
if ((a>='A' && a<='Z') || (a>='a' && a<='z'))
{
if (a=='a'||a=='A')
printf("%c is a Vowel...",a);
else if (a=='e'||a=='E')
printf("%c is a Vowel...",a);
else if (a=='i'||a=='I')
printf("%c is a Vowel...",a);
else if (a=='o'||a=='O')
printf("%c is a Vowel...",a);
else if (a=='u'||a=='U')
printf("%c is a Vowel...",a);
else
printf("%c is a Consonant...",a);
}
else
printf("%c is not a valid Alphabet...",a);
return 0;
}