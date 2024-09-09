/*Write a program to input marks physics,chemistry, Biology, Maths and computer science to the formula
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
    int a,b,c,d,e;
    int marks;
    printf("Enter the respective number:  ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    marks=((a+b+c+d+e)/5);
    if(marks>90)
        printf("The grade is Outstanding.");
    else if(marks>80 && marks<=90)
        printf("The grade is excellent.");
    else if(marks>70 && marks<=80)
        printf("The grade is A.");
    else if(marks>60 && marks<=70)
        printf("The grade is B.");
    else if(marks>50 && marks<=60)
        printf("The grade is C.");
    else if(marks>40 && marks<=50)
        printf("The grade is D.");
    else
        printf("The grade is F.");



}
