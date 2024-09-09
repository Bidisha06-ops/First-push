#include <stdio.h>
int main()
{
int vowels, consonant, digit, space;
int i=0;
char s[100];
vowels = consonant = digit = space = 0;
printf("Enter a line of string: ");
fgets(s, sizeof(s), stdin);
for ( i = 0; s[i] != '\0'; ++i)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
        ++vowels;
    }
    else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {
        ++consonant;
    }
    else if (s[i]>='0'&&s[i]<='9')
    {
        ++digit;
    }
    else if (s[i]==' ')
    {
        ++space;
    }
}
printf("Vowels: %d", vowels);
printf("\nConsonants: %d", consonant);
printf("\nDigits: %d", digit);
printf("\nWhite spaces: %d", space);
return 0;
}
