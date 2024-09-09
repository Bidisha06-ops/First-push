/*Taking 10 numbers and sum them up.*/

#include <stdio.h>
#include <math.h>
void main()
{
    int sum=0;
    int x,i;

    for(i=1;i<=10;i++)
    {
          printf("Enter the number: ");
          scanf("%d",&x);
          sum+=x;
    }
    printf("sum=%d",sum);
}
