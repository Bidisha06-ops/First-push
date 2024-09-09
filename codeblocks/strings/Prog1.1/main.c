#include <stdio.h>
int main()
{
char s[30] ;
int i=0;
printf("Enter the string: ");
gets(s);
while(s[i] !='\0')
i++;
printf("Length of the string: %d", i);
return 0;
}
