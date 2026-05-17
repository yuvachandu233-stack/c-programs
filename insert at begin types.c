#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};
typedef struct NODE NODE;
NODE *head=NULL,*tail=NULL;
int size=0;
NODE *create();
void insertAtBegin();
void insertAtEnd();
void insertAtPos();
void traverse();
NODE *create()
{
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	size++;
	return temp;
}
void insertAtBegin()
{
	NODE *temp=create();
	if(head==NULL)
	  head=tail=temp;
	else
	  {
	  	temp->next=head;
	  	head=temp;
	  }
}
void insertAtEnd()
{
	NODE *temp=create();
	if(head==NULL)
		head=tail=temp;
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
void insertAtPos()
{
	int pos;
	NODE *temp,*t;
	printf("enter position to insert:");
	scanf("%d",&pos);
	if(pos==size+1)
		insertAtEnd();
	else if(pos==1)
		insertAtBegin();
	else if(pos<=size)
	{
		int p=1;
		temp=create();
		t=head;
		while(t!=NULL)
		{
			p++;
			if(p==pos)
			{
				break;
			}
			t=t->next;
		}
			temp->next=t->next;
			t->next=temp;
		}
		else
			printf("no such position");
	}

void traverse()
{
	if(head==NULL)
	printf("list is empty\n");
	else
	{
		NODE *temp=head;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
/* Count Nodes */
int count()
{
    int c = 0;
    NODE *temp = head;
    while(temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
/* Delete at Beginning */
void deleteAtBegin()
{
    if(head == NULL)
        printf("List is empty\n");
    else if(head->next == NULL)
    {
    	NODE *temp = head;
        head = tail = NULL;
        size--;
        free(temp);
    }
    else
    {
        NODE *temp = head;
        head = head->next;
        size--;
        free(temp);
    }
}
/* Delete at End */
void deleteAtEnd()
{
    if(head == NULL)
        printf("List is empty\n");
    else if(head->next == NULL)
    {
        NODE *temp = head;
        head = tail = NULL;
        size--;
        free(temp);
    }
    else
    {
        NODE *t = head;
        NODE *temp=tail;
        while(t->next != tail)
            t = t->next;
        tail = t;
        tail->next = NULL;
        size--;
        free(temp);
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

int main()
{
	int ch;
	do{
	printf("1.insertAtBegin\n 2.insertAtEnd\n\\"
	"3.insertAt specific position\n 4.traverse\n\\"
	" 5.count\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insertAtBegin();
		       break;
		case 2:insertAtEnd();
		       break;
		case 3:insertAtPos();
		       break;
	    case 4:traverse();
	           break;
	    case 5:printf("list size=%d\n",size);
	           break;
	    case 6: deleteAtBegin(); break;
        case 7: deleteAtEnd(); break;
        case 8: deleteAtPos(); break;
	    default:printf("exit()");exit(0);
	}
}while(1);
	return 0;
}