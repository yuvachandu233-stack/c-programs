//circularqueue using array
#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size], ch, data, i, front = -1, rear = -1;
void insert();
void delete();
void traverse();
int main()
{    do
    {
        printf("\n MAIN MENU");
        printf("\n\t 1.INSERT");
        printf("\n\t 2.DELETE");
        printf("\n\t 3.TRAVERSE");
        printf("\n\t 4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {   case 1: insert(); break;
            case 2: delete(); break;
            case 3: traverse(); break;
            case 4: exit(0);
        }
    } while(ch <= 4);
    return 0;
}
void insert()
{
    if((front == 0 && rear == size - 1)
	 || (rear + 1) % size == front)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        printf("Enter the element:");
        scanf("%d", &data);

        if(front == -1)   // first element
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;   // circular increment
        }

        queue[rear] = data;
    }
}

void delete()
{
    if(front == -1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        data = queue[front];
        printf("Deleted element is %d\n", data);

        if(front == rear)   // only one element
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;   // circular increment
        }
    }
}

void traverse()
{
    if(front == -1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        i = front;
        while(1)
        {
            printf("\t\t%d\n", queue[i]);

            if(i == rear)
                break;

            i = (i + 1) % size;
        }
    }
}