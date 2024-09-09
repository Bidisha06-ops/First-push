/*To input angles of a triangle and check whether the triangle is valid or not*/

#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    printf("Enter the angles: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
}
