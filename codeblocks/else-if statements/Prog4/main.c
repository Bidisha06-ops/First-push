/*to find out the distance between the two points*/

#include <stdio.h>
#include <math.h>
void main()

{
    int x1,y1;
    int x2,y2;

    printf("Enter the four numbers: ");
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);

    float x,y,z;
    x = pow((x2-x1),2);
    y = pow((y2-y1),2);

    z = pow((x+y),0.5);
    printf("The distance between two points is %.2f",z);
}
