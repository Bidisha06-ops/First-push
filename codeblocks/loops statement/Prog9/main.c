#include <stdio.h>
int sum(void a,void b);
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    printf("\n%d",sum());
}
int sum()
{
    printf("%d",a+b);
    return 0;
}
