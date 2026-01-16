#include<stdio.h>
int main()
{
int a=0,b=1,c=0,n,t;
printf("Enter the number of Fabonacci Series terms that you want to print : ");
scanf("%d",&n);
for(t=0;t<n;t++){
c=a+b;
printf("%d\n",a);
a=b;
b=c;
}
return 0;
}
