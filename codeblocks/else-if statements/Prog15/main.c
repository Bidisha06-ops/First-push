/*Write a program to input charges and calculate total electricity bill according to the following
     For the 1st 50 units, rupees 0.50/unit
     For the 2nd 100 units, rupees 0.75/unit
     For the 3rd 100 units, rupees 1.20/unit
     For the unit above 200, rupees 1.50/unit
an additional sur_charge of 20% is added to every bill.*/

#include <stdio.h>
#include <math.h>
void main()
{
    int units;
    float amount, sur_charge;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = 25 + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        amount = 100 + ((units - 150) * 1.20);
    }
    else
    {
        amount = 220 + ((units - 250) * 1.50);
    }

    sur_charge = amount * 0.20;
    amount += sur_charge;

    printf("Electricity Bill = Rs. %.2f", amount);
}
