#define n 10 //macro
int main()
{
int a[n];
int i=0;
for(i=0;i<10;i++)
{
    scanf("%d",a+i);
    *(a+i)=a[i]+1;
}
for(i=0;i<10;i++)
    printf("%d\n",*(a+i));
}
