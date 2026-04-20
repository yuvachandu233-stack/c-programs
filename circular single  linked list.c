#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *head = NULL, *tail = NULL;
int size = 0;

/* Create Node */
NODE* create()
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    size++;
    return temp;
}

/* Insert at Beginning */
void insertAtBegin()
{
    NODE *temp = create();

    if(head == NULL)
    {
        head = tail = temp;
        tail->next = head;
    }
    else
    {
        temp->next = head;
        head = temp;
        tail->next = head;
    }
}

/* Insert at End */
void insertAtEnd()
{
    NODE *temp = create();

    if(head == NULL)
    {
        head = tail = temp;
        tail->next = head;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        tail->next = head;
    }
}

/* Count Nodes */
int count()
{
    int c = 0;

    if(head == NULL)
        return 0;

    NODE *temp = head;
    do
    {
        c++;
        temp = temp->next;
    } while(temp != head);

    return c;
}

/* Insert at Position */
void insertAtPos()
{
    int pos, i = 1;
    printf("Enter position: ");
    scanf("%d", &pos);

    int n = count();

    if(pos == 1)
        insertAtBegin();
    else if(pos == n + 1)
        insertAtEnd();
    else if(pos <= n)
    {
        NODE *temp = create();
        NODE *t = head;

        while(i < pos - 1)
        {
            t = t->next;
            i++;
        }

        temp->next = t->next;
        t->next = temp;
    }
    else
        printf("Invalid position\n");
}

/* Delete at Beginning */
void deleteAtBegin()
{
    if(head == NULL)
        printf("List is empty\n");
    else if(head == tail)
    {
        free(head);
        head = tail = NULL;
        size--;
    }
    else
    {
        NODE *temp = head;
        head = head->next;
        tail->next = head;
        free(temp);
        size--;
    }
}

/* Delete at End */
void deleteAtEnd()
{
    if(head == NULL)
        printf("List is empty\n");
    else if(head == tail)
    {
        free(head);
        head = tail = NULL;
        size--;
    }
    else
    {
        NODE *t = head;

        while(t->next != tail)
            t = t->next;

        NODE *temp = tail;
        tail = t;
        tail->next = head;
        free(temp);
        size--;
    }
}

/* Delete at Position */
void deleteAtPos()
{
    int pos, i = 1;
    printf("Enter position: ");
    scanf("%d", &pos);

    int n = count();

    if(pos == 1)
        deleteAtBegin();
    else if(pos == n)
        deleteAtEnd();
    else if(pos < n)
    {
        NODE *t = head;

        while(i < pos - 1)
        {
            t = t->next;
            i++;
        }

        NODE *temp = t->next;
        t->next = temp->next;
        free(temp);
        size--;
    }
    else
        printf("Deletion not possible\n");
}

/* Traverse List */
void traverse()
{
    if(head == NULL)
        printf("List is empty\n");
    else
    {
        NODE *temp = head;

        do
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while(temp != head);

        printf("(HEAD)\n");
    }
}

/* Main Function */
int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Insert Begin\n2.Insert End\n3.Insert Position\n");
        printf("4.Delete Begin\n5.Delete End\n6.Delete Position\n");
        printf("7.Traverse\n8.Count\n9.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
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