#include <stdio.h>
int main() {
char s[30] ;
int i;
printf("Enter the string:");
gets(s);
for (i = 0; s[i] !='\0'; ++i);
printf("Length of the string: %d", i);
return 0;
}
