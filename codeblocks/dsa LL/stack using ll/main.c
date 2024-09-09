#include<stdio.h>
#define NULL 0

typedef struct stack{
    int x;
    struct stack *next;
}st;

st *new, *new1,*ptr1,*loc, *locp;
st *head = NULL;

static int element = 0;

void create(st *);
void push(st *);
void pop(st *);
void display(st *);

int main()
{
    st *ptr;
    int choice;
    char ch='y';
    system("cls");
    fflush(stdin);
    ptr = (st *)malloc(sizeof(st));

    head = ptr;
    while(ch=='y')
    {
        system("cls");
    printf("\n Main Menu\n");
    printf("\nCreate Stack");
    printf("\n View Stack");
    printf("\n Push elements into the Stack");
    printf("\n Pop elements from the Stack");
    printf("\n Exit\n");

    printf("\n Enter your choice:");
    scanf("%d", &choice);

    switch(choice)
        {
              case 1: printf("\n Creation of Stack");
                      create(head);
                      break;            
              case 2: printf("\n Display the Stack");
                      display(head);
                      break;
              case 3: printf("\n Push into the Stack");
                      push(head);
                      break;
              case 4: printf("\n Pop from the Stack");
                      pop(head);
                      break;

              default: printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
printf(" \n Do you want to continue?:");
fflush(stdin);
scanf("%c", &ch);
    }
}
void create( st *ptr)
{
    char ch = "y";
    printf("\n Enter the element of the current node:");
    scanf("%d",&ptr->x); // putting value into the data part of the current node
    ptr->next=NULL; // putting next part to NULL as currently this is the only node.
    printf("\n Do you want to continue?:");
    scanf("%c",&ch);
    fflush(stdin);
    if((ch=='y') || (ch=='Y'))
    { ptr->next=(st *)malloc(1*sizeof(st));
      ptr = ptr->next;
      return(create(ptr));
    }
}
void display( st *ptr)

{
    while(ptr != NULL)
    { printf("%d ->",ptr->x);
      ptr = ptr->next;
    }
    printf("NULL");
}
void push(st * ptr)
{
    st *new;
    new = (st *)malloc(1*sizeof(st));
    while(ptr->next != NULL) // Why we are not writing ptr != NULL?
    ptr = ptr ->next;
    new->next = ptr ->next;
    ptr->next = new;
    printf("\n Enter the element of the new node:");
    scanf("%d", &new->x); // putting value into the data part of the new node
}
void pop(st *ptr)
{
    st *ptr1;
    if(ptr == NULL)
    { printf("\n Stack Empty");
      return;
    }
    else
    {
      ptr1 = ptr->next;
      while(ptr1->next != NULL)
      { ptr = ptr1;
        ptr1 = ptr1->next;
      }
    ptr->next = ptr1->next;
    free(ptr1);
    }
}
