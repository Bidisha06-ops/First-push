/*To enter 10 numbers and sum them up by using while function.*/

#include <stdio.h>
#include <math.h>
void main()
{
    int x,i;
    int sum=0;
    while(i<=10)
    {
        printf("Enter a value: ");
        scanf("%d",&x);
        sum+=x;
        i++;
    }
    printf("sum=%d",sum);

}
