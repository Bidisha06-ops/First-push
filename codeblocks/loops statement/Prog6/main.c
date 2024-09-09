#include <stdio.h>
int fact(int n)
{
    int i;
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The value is:%d",fact(a));
    return 0;
}
