/*To find the roots of an quadratic equation.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the coefficients a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;

    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are real and distinct: %.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("The roots are equal and real: %.2f and%.2f",r1,r2);
    }
    else
        {
        float real_part=-b/(2*a);
    float imaginary_part= sqrt(-d)/(2*a);
    printf("The roots are complex: %.2f+%.2fi and %.2f-%.2fi",real_part,imaginary_part,real_part,imaginary_part);
        }

}
