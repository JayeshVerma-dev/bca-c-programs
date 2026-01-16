#include<stdio.h>
#include<string.h>

int main() {
char str1[100], str2[100], str3[100];
int i, len, j;

printf("Enter First String: ");
gets(str1);
printf("Enter Second String: ");
gets(str2);

len = 0;

for(i=0; str1[i]!='\0'; i++)
{
len++;
}
printf("\nLength (defined): %d", len);
printf("\nLength (built-in): %d", strlen(str1));

i = 0;
while(str1[i]==str2[i] && str1[i]!=0)
{ i++; }
if(str1[i] == str2[i])
printf("\nStrings are equal (defined)");
else
printf("\nStrings are not equal (defined)");

if(strcmp(str1, str2) == 0)
printf("\nStrings are equal (built-in)");
else
printf("\nStrings are not equal (built-in)");
    
for(i=0; str1[i]!='\0'; i++)
{ str3[i] = str1[i]; }
str3[i] = '\0';
printf("\nCopied string (defined): %s", str3);

strcpy(str3, str1);
printf("\nCopied string (built-in): %s", str3);
    
i = 0;
while(str1[i] != '\0'){
i++;
}
for(j=0; str2[j]!='\0'; j++){
str1[i] = str2[j];
i++;
}
str1[i] = '\0';
printf("\nConcatenated (defined): %s", str1);   
printf("\nConcatenated (built-in): %s",strcat(str3,str2));
return 0;
}