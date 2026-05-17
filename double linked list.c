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
struct node* create() 
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    size++;
    return newnode;
}
// Insert at Beginning
void insertAtBegin() 
{
    struct node *newnode;
    newnode = create();
    if (head == NULL)
    {      head = tail = newnode; } 
    else 
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}
// Insert at End
void insertAtEnd() 
{
    struct node *newnode;
    newnode = create();
    if (head == NULL) 
    {        head = tail = newnode;   } 
    else 
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
// Insert at Position
void insertAtPos() 
{
    struct node *newnode, *t;
    int pos, p = 1;
    printf("Enter position to insert: ");
    scanf("%d", &pos);
	printf("\n size=%d",size);
    if (pos == 1) 
		insertAtBegin();
    else if (pos ==size+1 )
   		insertAtEnd();	
    else if (pos <= size)
    {
        newnode = create();
        t = head;
        while (t->next != NULL)
        {  p++;
            if (p == pos) break;
            t = t->next;
        }
        newnode->prev = t;
        newnode->next = t->next;
        t->next->prev = newnode;
        t->next = newnode;
    }
    else 
    {       printf("No such position\n");  }
}
/* Count Nodes */
int count()
{    int c = 0;
    NODE *temp = head;
    while(temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
// Delete at Beginning
void deleteAtBegin() 
{    NODE *temp;
    if (head == NULL) 
    {        printf("List is empty\n");    }
    else if (head->next == NULL) 
    {
        temp = head;
        head = tail = NULL;
    } 
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
    }
    size--;
    free(temp);
    printf("Deleted from beginning\n");
}
// Delete at End
void deleteAtEnd() 
{
    NODE *temp;
    if (head == NULL) 
    {        printf("List is empty\n");    }
    else if (head->next == NULL) 
    {
        temp = head;
        head = tail = NULL;
        size--;
        free(temp);
        printf("Deleted last node\n");
        return;
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        size--;
        free(temp);
    }
    printf("Deleted from end\n");
}

// Delete at Position
void deleteAtPos() 
{
    int pos;
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
        NODE *t = head, *temp;
        int p = 1;

        while (t->next != NULL)
        {
            p++;
            if (p == pos)
                break;
            t = t->next;
        }

        temp = t->next;
        t->next = temp->next;
        temp->next->prev = t;

        size--;
        free(temp);
        printf("Deleted at position %d\n", pos);
    }
}

/* Traverse List */
void traverse()
{
    if(head == NULL)
        printf("List is empty\n");
    else
    {
        NODE *temp = head;
        while(temp != NULL)
        {
            printf("%d <	-> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
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
    return 0;
}