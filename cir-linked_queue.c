#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL)
	{
        front = rear = newNode;
        rear->next = front;
    }
	else
	{
        rear->next = newNode;
        rear = newNode;
        rear->next = front; 
    }
    printf("%d enqueued to circular queue\n", value);
}
void dequeue()
{
    if (front == NULL)
	{
        printf("Queue Underflow (empty)\n");
        return;
    }

    if (front == rear)
	{
        printf("%d dequeued from circular queue\n", front->data);
        free(front);
        front = rear = NULL;
    } else {
        struct Node* temp = front;
        printf("%d dequeued from circular queue\n", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void display()
{
    if (front == NULL)
	{
        printf("Circular Queue is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Circular Queue elements are:\n");
    do
	{
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}
int main()
{
    int choice, value;

    while (1)
	{
        printf("\n--- Circular Linked Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
		{
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

