/*To write a program to input basic salary of an employee and calculate its Gross depending on the following cases.
1. Basic Salary <= 10000
   h.r.a = 20%
    d.a = 80%
2. Basic Salary <= 20000
   h.r.a = 25%
   d.a.  = 90%
3. Basic Salary >= 20000
   h.r.a = 35%
   d.a = 95%*/

#include <stdio.h>
#include <math.h>
void main()
{
    int basic_salary;
        printf("Enter the basic_salary; ");
        scanf("%d",&basic_salary);
        float gross_salary=0;
        if(basic_salary<=10000)
            gross_salary=basic_salary+(basic_salary*0.2)+(basic_salary*0.8);
        else
        {
            if(basic_salary<=20000)
                gross_salary=basic_salary+(basic_salary*0.25)+(basic_salary+0.9);
            else
                gross_salary=basic_salary+(basic_salary*0.35)+(basic_salary+0.95);
        }
          printf("The gross_salary is %.2f",gross_salary);
}
