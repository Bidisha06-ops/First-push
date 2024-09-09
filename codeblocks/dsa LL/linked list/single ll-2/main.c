#include <stdio.h>
#include <stdlib.h>
#define NULL 0

typedef struct list
{
    int x;
    struct list*next;
}l;

l*head=NULL;
void create(l*);
void display(l*);

int main()
{
    system("cls");
    fflush(stdin);
    head=(l*) malloc(1*sizeof(l));
    printf("\nCreate the list: ");
    create(head);
    printf("\nDisplay the list: ");
    display(head);
    return;
}

void create(l*ptr)
{
    char ch="y";
    printf("\nEnter the element of the current node: ");
    scanf("%d", &ptr->x); //putting value into the data part of the current node.
    ptr->next=NULL; //putting next part to NULL as currently this is the only node.
    printf("/nDo you want to continue?: ");
    scanf(" %c",&ch);
    if((ch=='y')||(ch=='Y'))
    {
        ptr->next=(l*)malloc(sizeof(l));
        ptr=ptr->next;
        return (create(ptr));
    }
}

void display(l*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->x);
        ptr=ptr->next;
    }
    printf("NULL");
}
