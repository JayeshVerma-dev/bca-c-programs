#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers to check which one is largest :\n");
scanf("%d%d%d",&a,&b,&c);
//For Distinct Numbers
if (a>b&&a>c)
printf("'%d' is the Largest...",a);
else if (b>a&&b>c)
printf("'%d' is the Largest...",b);
else if (c>a&&c>b)
printf("'%d' is the Largest...",c);
//For Number being equal
else if (a>b&&b==c)                   //A b c
printf("'%d' is Largest...",a);
else if (b>c&&b==a)                   //A B c
printf("'%d' is Largest...",b);
else if (a==b&&a==c)                  //A B C
printf("ALL NUMBERS ARE EQUAL");
else if (c>b&&b==a)                   //a b C
printf("'%d' is Largest...",c);
else if (b>a&&b==c)                   //a B C 
printf("'%d' is Largest...",b);
else if (a>b&&a==c)                   //A b C 
printf("'%d' is Largest...",a);
else if (b>a&&a==c)                   //a B c
printf("'%d' is Largest...",b);
return 0;
}