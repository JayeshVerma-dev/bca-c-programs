#include<stdio.h>

struct Student {
char name[50];
int age;
};

int main() {
struct Student s;

printf("Enter student name: ");
gets(s.name);
printf("Enter student age: ");
scanf("%d", &s.age);

printf("\nStudent Details:");
printf("\nName: %s", s.name);
printf("\nAge: %d", s.age);
return 0;
}