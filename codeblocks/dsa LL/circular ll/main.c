#include <stdio.h>
#include <stdlib.h>
typedef struct cir
{
    int x;
    struct doub* next;
} cl;
cl *head=NULL;

void creat (cl*);
void display (cl*);
void insert_beg (cl*);
void insert_end (cl*);
void insert_af (cl*);
void del_anypos(cl*);
void sort (cl*);

int main()
{
    head = (cl*)malloc(sizeof(cl));
    int opt;
    int ele;
    char ch;
    ch = 'y';
    while (ch=='y');
    {
        system("cl");
        printf("\n\n main menu\n");
        printf("\n 1.create the list \n 2. Display the list \n 3. Insert at beginning \n 4. Insert at end \n 5. Insert after an element \n 6. delete at any position \n 7. sort the list \n 8. exit \n");
        printf("Enter your choice: ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            printf("\n create the list:");
            create (head);
            break;

        case 2:
            printf("\n display the list :");
            display (head);
            break;
        case 3:
            printf("Insert at the beginning");
            insert_beg(head);
            break;
        case 4:
            printf("\n inserting at the end:");
            break;
            insert_end (head);
        case 5:
            printf("\n Inserting after:");
            insert_af (head);
            break;
        /*case 6:
            printf("Enter the element to be deleted:");

            scanf("%d", &ele);
            printf("The element is deleted.", ele);
            del_anypos(head,ele);
            break;*/
        case 7:
            printf("sort the list ");
            sort(head);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf(" Worng choice!!!\n");

        }
        return 0;
    }
    void create (cl *ptr)
    {
        char ch = "y";
        printf("\n Enter the element of the current node.");
        scanf("%d",&ptr->x);
        ptr->next=head;
        printf("\n do u want to cont?");
        scanf(" %c", &ch);
        if((ch=='y')||(ch=='Y'))
        {
            ptr->next=(cl*)malloc(1*sizeof (ch));
            ptr=ptr->next;
            return(create(ptr));
        }
    }
    void display(cl *ptr)
    {
        do
        {
            printf("%d->",ptr->x);
            ptr=ptr->next;
        }
        while (ptr!=head);
    }
    void insert_beg(cl*ptr)
    {
        while (ptr->next!=head)
        {
            ptr=ptr->next;
        }
        cl*new ;
        new=(cl*)malloc(sizeof (cl));
        new->next=head;
        head = new;
        ptr->next = new;
        printf("\n Enter the element of the new node:");
        scanf("%d",&new->x);

    }
    void insert_end(cl*ptr)
    {
        while (ptr->next !=head)
        {
            ptr = ptr->next;
        }
        cl*new;
        new = (cl*)malloc(sizeof(cl));
        new->next = head;
        ptr->next = new;
        printf("\n Enter the of the new node");
        scanf("%d",&new ->x);
    }
    void insert_af (cl*ptr)
    {
        cl* new;
        int element;
        printf("enter the element after which to insert: ");
        scanf("%d", &element);
        do
        {
            if (ptr->x==element)
            {
                new = (cl*)malloc(sizeof (cl));
                new->next =  ptr->next;
                ptr->next=new;
                printf("\nEnter the element of the new node:");
                scanf("%d", &new->x);
                ptr=ptr->next;
            }
            else
            {
                ptr=ptr->next;
            }

        }
        while (ptr->next!=head);

        /*void del_anypos (1 ptr, int ele)
         {
             if (ptr->x-ele)
             {
                 head ptr->next;
                 loc ptr;
                 free (loc);
             if (head!=NULL)
              {
                  return del anypos (head, ele);
              }
             else
             {
                 printf("The list is empty");
                 head-NULL;
             }
             }
             else
             {
                 1* ptr1;
                 ptrl- ptr->next;
                 while (ptrl=NULL)
                 {
                     if (ptrl->x==ele)
                 {
                     ptr ->next = ptr1 -> next;
                     loe= ptr1;
                     free(loc);
                     ptr!=ptr->next;
                 }
                 else{
                     ptr = ptr->next;
                     ptr!=ptr1->next;
                 }
                 }
                 return;
             }
         }*/
        void sort (cl* ptr)
        {
            cl* ptr1;
            if(ptr==NULL)
            {
                return;
            }
            do
            {
                ptr1 = ptr->next;
                do
                {
                    if(ptr->x>ptr1->x)
                    {
                        swap(ptr,ptr1);
                    }
                    ptr1=ptr1->next;
                }
                while (ptr1!=head);
                ptr=ptr->next;
            }

            while(ptr!=head);

        }

