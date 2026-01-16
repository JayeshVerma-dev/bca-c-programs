#include<stdio.h>
#include<stdlib.h>

int main() {
char *name;

name=(char*)malloc(sizeof(char)*50);

if(name == NULL) {
printf("Memory allocation failed!");
return 0;
}

printf("Enter your name : ");
gets(name);

printf("Your name is : %s", name);

free(name);
return 0;
}