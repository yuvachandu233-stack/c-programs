//Queue using Linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
int size = 0;
NODE *front = NULL, *rear = NULL, *temp;
NODE* create()
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    size++;
    return temp;
}

void insert();
void delete();
void traverse();

int main()
{
    int ch;
    printf("\n\t\t MAINMENU");
    printf("\n\t 1.INSERT");
    printf("\n\t 2.DELETE");
    printf("\n\t 3.TRAVERSE");
    printf("\n\t 4.EXIT");

    do
    {
        printf("\nEnter ur choice:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: traverse(); break;
            case 4: exit(0);
        }
    } while(ch <= 4);

    return 0;
}

void insert()
{
    temp = create();

    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void delete()
{
    if(front == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        temp = front;
        printf("\nDeleted element is: %d", temp->data);
        front = front->next;

        if(front == NULL)   // FIX: reset rear also
        {
            rear = NULL;
        }

        free(temp);
    }
}

void traverse()
{
    if(front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue using linked list: ");
        for(temp = front; temp != NULL; temp = temp->next)
        {
            printf("%d -> ", temp->data);
        }
        printf("NULL");
    }
}