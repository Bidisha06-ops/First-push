/*To check whether the triangle is an equilateral triangle or an isosceles triangle.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The triangle is an equilateral triangle.");
    }
    else if (a==b || b==c || c==a)
    {
        printf("The triangle is an isosceles triangle.");
    }
    else
        printf("The triangle is neither equilateral nor isosceles triangle.");

}
