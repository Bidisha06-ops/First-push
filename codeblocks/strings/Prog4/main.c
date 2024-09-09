#include <stdio.h>
int main()
{
    char s[50], r[50];
    int begin, end, count = 0;
    printf("Input a string: ");
    gets(s);
// Calculating string length
    while(s[count]!= '\0')
        count++;
        end = count - 1;
         for (begin = 0; begin<count; begin++)
         {
             r[begin] = s[end];
             end--;
         }
         r[begin] = '\0';
         puts( r);
         return 0;
}
