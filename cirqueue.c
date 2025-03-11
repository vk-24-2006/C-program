#include <stdio.h>

int queue[5]; 
int front = -1, rear = -1;
int isFull() {
    return (rear + 1) % 5 == front;
}
int isEmpty() {
    return front == -1;
}
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % 5;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1; 
    } else {
        int dequeuedValue = queue[front];
        if (front == rear) { 
            front = rear = -1;
        } else {
            front = (front + 1) % 5;
        }
        return dequeuedValue;
    }
}
void printQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % 5;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued: %d\n", value);
                }
                break;
            case 3:
                printQueue();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

