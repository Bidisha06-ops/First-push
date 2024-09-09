/*To input the month number and print number of days in the month.*/

#include <stdio.h>
#include <math.h>

void main()
{
    int month;
    printf("Enter the month number(1-12): ");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("Month has 31 days",month);
    else if(month==2)
        printf("Month has 28 or 29 days",month);
    else if(month==4||month==6||month==9||month==11)
        printf("Month has 30 days",month);
    else
        printf("Month number is not valid",month);
}
