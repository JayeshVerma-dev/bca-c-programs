#include<stdio.h>
int main()
{int a;
for(a=1;a<=5;a++)
{switch(a){
case 1 :
printf("A\n");
break;
case 2 :
printf("A B\n");
break;
case 3 :
printf("A B C\n");
break;
case 4 :
printf("A B C D\n");
break;
case 5 :
printf("A B C D E\n");
break;
default : break;}}
return 0;
}