#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtFirst(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;

    ptr->next = head;
    return ptr;
}
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *abc = (struct Node *)malloc(sizeof(struct Node));
    struct Node *xyz = head;

    int i = 0;
    while (i < index - 1 && xyz != NULL)
    {
        xyz = xyz->next;
        i++;
    }
    if (xyz == NULL)
    {
        printf("invalid input !\n");
        return (head);
    }

    abc->data = data;
    abc->next = xyz->next;
    xyz->next = abc;
    return head;
}
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *newNode;

    int value;
    int index;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    newNode = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = NULL;

    printf("Original linked list:\n");
    linkedListTraversal(head);

    while (1)
    {
        printf("Enter a value (-1 to exit): ");
        scanf("%d", &value);

        if (value == -1)
        {
            break;
        }

        // Update the linked list by inserting the new value at the beginning
        head = insertAtFirst(head, value);

        printf("Updated linked list:\n");
        linkedListTraversal(head);
    }

    while (1)
    {
        printf("Enter a value to be insert (-1 to exit): ");
        scanf("%d", &value);

        if (value == -1)
        {
            break;
        }

        printf("Enter the index to insert the value: ");
        scanf("%d", &index);

        if (index < 0)
        {
            printf("Invalid index, must be non-negative.\n");
            continue;
        }
        if (index == 0)
        {
            head = insertAtFirst(head, value);
        }
        else
        {
            head = insertatindex(head, index, value);
        }

        printf("updated list :");
        linkedListTraversal(head);
    }
    return 0;
}
