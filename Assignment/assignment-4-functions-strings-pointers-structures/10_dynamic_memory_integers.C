#include<stdio.h>
#include<stdlib.h>

int main() {
int *ptr,i;

ptr = (int*)malloc(5 * sizeof(int));

if(ptr == NULL) {
printf("Memory allocation failed!");
return 0;
}

printf("Enter 5 integers:\n");
for(i=0; i<5; i++){
scanf("%d", &ptr[i]);
}

printf("\nYou entered:\n");
for(i=0; i<5; i++){
printf("%d ", ptr[i]);
}

free(ptr);
return 0;
}
}