#include <stdio.h>
#include <math.h>

void main()
{
    int p,r,t;
    float si;
    printf("Enter p: ");
    scanf("%d",&p);
    printf("Enter r: ");
    scanf("%d",&r);
    printf("Enter t: ");
    scanf("%d",&t);
    si = p*r*t/100;
    printf("Simple Interest = %f",si);
}

