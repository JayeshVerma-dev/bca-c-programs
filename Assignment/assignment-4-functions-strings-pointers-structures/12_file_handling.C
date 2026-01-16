#include<stdio.h>
int main() {
FILE *fp;
char name[50];
int age;

fp = fopen("student.txt", "w");
if(fp == NULL) {
printf("Error opening file!");
return 0;
}

printf("Enter name: ");
gets(name);
printf("Enter age: ");
scanf("%d", &age);

fprintf(fp, "%s %d", name, age);
fclose(fp);
printf("\nData written to file successfully!");

fp = fopen("student.txt", "r");
if(fp == NULL) {
printf("\nError opening file!");
return 0;
}

fscanf(fp, "%s %d", name, &age);
printf("\n\nData read from file:");
printf("\nName: %s", name);
printf("\nAge: %d", age);

fclose(fp);
return 0;
}