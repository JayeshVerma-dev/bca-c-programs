#include<stdio.h>

struct Book {
char title[100];
float price;
};
int main() {
struct Book b;

printf("Enter book title: ");
gets(b.title);
printf("Enter book price: ");
scanf("%f", &b.price);

printf("\n---Book Details---");
printf("\nTitle: %s", b.title);
printf("\nPrice: Rs. %.2f", b.price);
return 0;
}
}