#include<stdio.h>

struct Student {
char name[50];
int rollno;
int age;
float marks;
};

int main() {
struct Student s;

printf("Enter student name: ");
gets(s.name);
printf("Enter roll number: ");
scanf("%d", &s.rollno);
printf("Enter age: ");
scanf("%d", &s.age);
printf("Enter marks: ");
scanf("%f", &s.marks);

printf("\n---Student Details---");
printf("\nName: %s", s.name);
printf("\nRoll Number: %d", s.rollno);
printf("\nAge: %d", s.age);
printf("\nMarks: %.2f", s.marks);
return 0;
}