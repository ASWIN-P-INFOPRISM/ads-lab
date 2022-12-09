#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue();
void dequeue();
void display();
int main()
{
	int option;
	do
	{
		printf("\n\n*******MENU*********");
		printf("\n\n1. ENQUEUE");
		printf("\n\n2. DEQUEUE");
		printf("\n\n3. DISPLAY");
		printf("\n\n4. EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : enqueue();
					 break;
			case 2 : dequeue();
					 break;
			case 3 : display();
					 break;
			case 4 : exit(0);
		}
	}while(option<5);
	return 0;
}

void enqueue()
{
	int num;
	struct node *newnode;
	printf("Enter element : ");
	scanf("%d",&num);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = num;
	newnode->next = NULL;
	if(front == NULL && rear==NULL)
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		newnode->next = front;
		rear = newnode;
		
	}
}

void dequeue()
{

	if(front == NULL)
	{
		rear = NULL;
		printf("\n\nQueue is empty...");
	}

	else if(front == rear){
		struct node *ptr;
		ptr = front;
		front = rear = NULL;
		free(ptr);
	}

	else
	{
		struct node *ptr;
		ptr = front;
		printf("%d is deleted",ptr->data);
		front = front->next;
		rear->next = front;
		free(ptr);
	}
}
void display()
{
	if(front == NULL && rear == NULL)
	{
		printf("\n\nQueue is empty...");
		exit(0);
	}
	struct node *ptr;
	ptr = front;
	printf("QUEUE : \n");

	printf("\t\%d\t",ptr->data);
	ptr = ptr->next;

	while(ptr!=front)
	{
		printf("\t\%d\t",ptr->data);
		ptr = ptr->next;
	}
}
	
	
	
	
	
