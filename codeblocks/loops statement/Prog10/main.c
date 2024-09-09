#include <stdio.h>
void swap(int a,int b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x=4,y=5;
    printf("The value of x & y is %d & %d",x,y);
    swap(x,y);
    printf("\nThe value of x & y is %d & %d",y,x);
    return 0;
}
