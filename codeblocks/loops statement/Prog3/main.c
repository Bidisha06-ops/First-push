/*add the series 1+x^1+x^2+x^3....+x^n.*/

#include <stdio.h>
#include <math.h>
void main()
{
    int i,x,n;
    int sum=0;
    printf("Enter the values of x & n: ");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++)
    {
        sum+=pow(x,i);
    }
    printf("\nsum=%d",sum);
}
