#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

typedef struct node NODE;

NODE *head = NULL, *tail = NULL;
int size = 0;

/* Create Node */
struct node* create() 
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = newnode;
    newnode->prev = newnode;
    size++;
    return newnode;
}

/* Insert at Beginning */
void insertAtBegin() 
{
    NODE *newnode = create();

    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->prev = tail;
        head->prev = newnode;
        tail->next = newnode;
        head = newnode;
    }
}

/* Insert at End */
void insertAtEnd() 
{
    NODE *newnode = create();

    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        newnode->next = head;
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
}

/* Insert at Position */
void insertAtPos() 
{
    int pos, p = 1;
    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        insertAtBegin();
    }
    else if (pos == size + 1)
    {
        insertAtEnd();
    }
    else if (pos <= size)
    {
        NODE *newnode = create();
        NODE *t = head;

        while (p < pos - 1)
        {
            t = t->next;
            p++;
        }

        newnode->next = t->next;
        newnode->prev = t;
        t->next->prev = newnode;
        t->next = newnode;
    }
    else
    {
        printf("Invalid position\n");
    }
}

/* Delete at Beginning */
void deleteAtBegin() 
{
    NODE *temp;

    if (head == NULL)
    {
        printf("List empty\n");
        return;
    }
    else if (head == tail)
    {
        temp = head;
        head = tail = NULL;
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
    }

    size--;
    free(temp);
}

/* Delete at End */
void deleteAtEnd() 
{
    NODE *temp;

    if (head == NULL)
    {
        printf("List empty\n");
        return;
    }
    else if (head == tail)
    {
        temp = head;
        head = tail = NULL;
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
    }

    size--;
    free(temp);
}

/* Delete at Position */
void deleteAtPos() 
{
    int pos, p = 1;
    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        deleteAtBegin();
    }
    else if (pos == size)
    {
        deleteAtEnd();
    }
    else if (pos < size)
    {
        NODE *t = head;

        while (p < pos - 1)
        {
            t = t->next;
            p++;
        }

        NODE *temp = t->next;
        t->next = temp->next;
        temp->next->prev = t;

        size--;
        free(temp);
    }
    else
    {
        printf("Invalid position\n");
    }
}

/* Traverse */
void traverse()
{
    if (head == NULL)
    {
        printf("List empty\n");
        return;
    }

    NODE *temp = head;

    while (1)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
        if (temp == head)
            break;
    }
    printf("(head)\n");
}

/* Count */
int count()
{
    return size;
}

/* Main */
int main()
{
    int choice;

    while (1)
    {
        printf("\n1.Insert Begin\n2.Insert End\n3.Insert Position\n");
        printf("4.Delete Begin\n5.Delete End\n6.Delete Position\n");
        printf("7.Traverse\n8.Count\n9.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: insertAtBegin(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtPos(); break;
            case 4: deleteAtBegin(); break;
            case 5: deleteAtEnd(); break;
            case 6: deleteAtPos(); break;
            case 7: traverse(); break;
            case 8: printf("Count = %d\n", count()); break;
            case 9: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}