#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int value)
{
    if (top == size - 1)
    {
        printf("Stack OverFlow!!");
    }
    else
    {
        stack[++top] = value;
        printf("%d inserted into stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack UnderFlow!!");
    }
    else
    {
        printf("%d popped from stack.\n", stack[top--]);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack UnderFlow!!");
    }
    else
    {
        printf("Top Element of Stack : %d", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack UnderFlow!!");
    }
    else
    {
        printf("Stack Elements : ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n-- Stack Menu --\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Value to Push : ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice! Try Again.\n");
        }
    }
    return 0;
}