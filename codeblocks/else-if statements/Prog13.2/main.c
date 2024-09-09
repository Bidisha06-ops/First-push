/*Write a program by nested if to input marks physics,chemistry, Biology, Maths and computer science to the formula
percentage>90%   outstanding
80-90%           E
70-80%           A
60-70%           B
50-60%           C
40-50%           D
<40%             F*/


#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d,e,percentage;
    float marks;
    char grade;
    printf("Enter the marks of respective subjects: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    marks = a+b+c+d+e;
    percentage = (marks / 500) * 100;

    if(percentage>90)
        printf("The grade is O.\n");
    else
    {
        if(percentage>80)
           printf("The grade is E.\n");
        else
        {
            if(percentage>70)
                printf("The grade is A.\n");
            else
            {
                if(percentage>60)
                    printf("The grade is B.\n");
                else
                {
                    if(percentage>50)
                        printf("The grade is C.\n");
                    else
                    {
                        if(percentage>40)
                            printf("The grade is D.\n");
                        else
                            {
                                printf("The grade is F.\n");
                            }
                    }
                }
            }
        }
    }
    printf("percentage: %.2f\n", percentage);
}
