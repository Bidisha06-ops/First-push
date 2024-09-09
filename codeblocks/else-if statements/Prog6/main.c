/*To count total number of notes in a given amount*/

#include <stdio.h>
#include <math.h>
void main()
{
    int note2000=0,note500=0,note100=0,note50=0,note10=0,note1=0;
    int amount;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    if(amount>=2000)
    {
        note2000=amount/2000;
        amount-=note2000*2000;
    }
    if(amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount-=note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount-=note50*50;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount-=note10*10;
    }
    if(amount>=1)
    {
        note1=amount/1;
        amount-=note1*1;
    }
    if(note2000>0)
        printf("The number of notes of Rs.2000 is: %d\n",note2000);
    if(note500>0)
        printf("The number of notes of Rs.500 is: %d\n",note500);
    if(note100>0)
        printf("The number of notes of Rs.100 is: %d\n",note100);
    if(note50>0)
        printf("The number of notes of Rs.50 is: %d\n",note50);
    if(note10>0)
        printf("The number of notes of Rs.10 is: %d\n",note10);
    if(note1>0)
        printf("The number of notes of Rs.1 is: %d\n",note1);

}
