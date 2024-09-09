#include <stdio.h>
#include <stdlib.h>
#define NULL 0

typedef struct list
{
    int x;
    struct list *prev;
    struct list *next;
} dl;

dl *head=NULL;
*loc, *ptr1, *new;

int ele, ele1, ele2, ele3;

void create(dl *);
void display(dl *);
void insert_beg(dl *);
void insert_end(dl *);
void insert_after(dl *);
void insert_before(dl *);
void delete_beg(dl *);
void delete_end(dl *);
void delete_after(dl *);
void delete_before(dl *);

int main()
{
    head = (dl *)malloc(sizeof(dl));
    head->prev=NULL;
    int option;
    char ch;
    ch = 'y';
    while (ch == 'y')
    {
        system("cls");
        printf("\nMain Menu\n");
        printf("\n1.Create the list.\n2.Display the list.\n3.Insertion at the beginning.\n4.Insertion at the end.\n5.Insertion after the node.\n6.Insertion before the node.\n7.Deletion from the beginning.\n8.Deletion from the end.\nDeletion after the node.\n9.Deletion before the node.\nExit.\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nCreate the list:");
            create(head);
            break;
        case 2:
            printf("\nDisplay the list: ");
            display(head);
            break;
        case 3:
            printf("\nInserting at the beginning : ");
            insert_beg(head);
            break;
        case 4:
            printf("\nInserting at the end: ");
            insert_end(head);
            break;
        case 5:
            printf("\nInserting after the node:");
            insert_after(head);
            break;
        case 6:
            printf("\nInserting before the night: ");
            insert_before(head);
            break;
        case 7:
            printf("Enter the number you want to delete from the beginnig:");
            scanf("%d", &ele);
            delete_beg(head);
            break;
        case 8:
            printf("Enter the number you want to delete from the end:");
            scanf("%d", &ele1);
            delete_end(head);
            break;
        case 9:
            printf("Enter the number you want to delete after the node:");
            scanf("%d", &ele2);
            delete_after(head);
            break;
        case 10:
            printf("Enter the number you want to delete before the node:");
            scanf("%d", &ele3);
            delete_before(head);
            break;
        case 11:
            exit(0);
            break;
        default:
            printf("\nWrong Choice!!\n");
        }
        printf("\nDo you want to continue the operations?: ");
        scanf(" %c",&ch);
    }
    return 0;
}

void create(dl *ptr)
{
    ptr->next=NULL;
    printf("\nEnter the element to be entered: ");
    scanf("%d",&ptr->x);
    char ch;
    printf("\nDo you want to continue?: ");
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
        ptr->next=(dl *)malloc(sizeof(dl));
        ptr->next->prev=ptr;
        ptr=ptr->next;
        create(ptr);
    }
}

void display(dl *ptr)
{
    while(ptr->next !=NULL)
    {
        printf("%d->",ptr->x);
        ptr=ptr->next;
    }
    do
    {
        printf("%d->",ptr->x);
        ptr=ptr->prev;
    }
    while (ptr);
    printf("NULL");
}





