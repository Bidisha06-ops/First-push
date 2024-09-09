/*To input any character and check whether it is an alphabet, digit or the special character.*/

#include <stdio.h>
#include <math.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("The character is an alphabet",ch);
    }
    else if(ch>='0'&&ch<='9')
        printf("The character is a digit",ch);
    else
        printf("The character is a special character",ch);
}
