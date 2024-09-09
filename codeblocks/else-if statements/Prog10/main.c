/*To input all sides of a triangle and check whether the triangle is valid or not.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
}
