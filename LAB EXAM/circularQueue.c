#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int value)
{
    // Check Overflow
    if((rear + 1) % size == front)
    {
        printf("Queue OverFlow!!\n");
        return;
    }

    // First element
    if(front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }

    queue[rear] = value;
    printf("%d inserted into Queue.\n", value);
}

void dequeue()
{
    // Check Underflow
    if(front == -1)
    {
        printf("Queue UnderFlow!!\n");
        return;
    }

    printf("%d deleted from Queue.\n", queue[front]);

    // If only one element
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}

void display()
{
    if(front == -1)
    {
        printf("Queue is Empty.\n");
        return;
    }

    printf("Queue Elements: ");

    int i = front;
    while(1)
    {
        printf("%d ", queue[i]);
        if(i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
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
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}