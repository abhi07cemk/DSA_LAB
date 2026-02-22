#include<stdio.h>
#define size 10

int queue[size];
int front = -1, rear = -1;

void enqueue(int value)
{
    if(rear == size - 1)
    {
        printf("Queue OverFlow!!\n");
    }
    else
    {
        if(front == -1)
            front = 0;

        queue[++rear] = value;
        printf("%d inserted into Queue.\n", value);
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue UnderFlow !!\n");
    }
    else
    {
        printf("%d deleted from Queue.\n", queue[front++]);

        if(front > rear)   // Reset when queue becomes empty
        {
            front = rear = -1;
        }
    }
}

void frontPeek()
{
    if(front == -1 || front > rear)
        printf("Queue is Empty.\n");
    else
        printf("Front Element : %d\n", queue[front]);
}

void rearPeek()
{
    if(front == -1 || front > rear)
        printf("Queue is Empty.\n");
    else
        printf("Rear Element : %d\n", queue[rear]);
}

void display()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Queue Elements: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front Peek\n");
        printf("4. Rear Peek\n");
        printf("5. Display\n");
        printf("6. Exit\n");
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
                frontPeek();
                break;

            case 4:
                rearPeek();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}