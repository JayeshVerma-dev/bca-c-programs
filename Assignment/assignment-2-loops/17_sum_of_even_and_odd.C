#include<stdio.h>
int main()
{
int a,b,e=0,o=0;
printf("Enter a number till which you'll get the sum of Odd and Even Numbers : ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{if ((b%2)==0) {e++;}
else {o++;}
}
printf("There are %d Even Numbers & %d Odd Numbers in the Number Series till %d...",e,o,a);
return 0;
}