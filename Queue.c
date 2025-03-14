#include<stdio.h>
int queue[5],front=-1,rear=-1,size=5;
void enqueue(int value)
{
	if(rear==size-1)
	{
		printf("queue is full \n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		queue[++rear]=value;
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("Queue is empty \n");
	}
	else
	{
		printf("dequeued..%d\n",queue[front]);
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty..\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
		printf("Queue -> %d\n",queue[i]);
	    }
	}
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("The value : ");
			scanf("%d",&value);
			enqueue(value);
		}
		else if(choice==2)
		{
			dequeue(queue);
		}
		else if(choice==3)
		{	
			printf("\n");
			display(queue);
			printf("\n");
		}
		else if(choice==4)
		{
			printf("Exiting...");
			break;
		}
		else
		{
			printf("Invalid Input\n");
		}
	}
	return 0;
}
