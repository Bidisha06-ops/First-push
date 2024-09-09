#include <stdio.h>
#include <math.h>

void main()
{
    int p,t;
    float ci,r;
    printf("Enter p: ");
    scanf("%d",&p);
    printf("Enter r: ");
    scanf("%f",&r);
    printf("Enter t: ");
    scanf("%d",&t);
    ci = p*(pow((1+r/100),t));
    printf("Compound Interest = %f",ci);

}
