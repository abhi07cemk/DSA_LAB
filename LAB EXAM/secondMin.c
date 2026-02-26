#include <stdio.h>

int secondMin(int a[], int n)
{
    if (n < 2)
    {
        printf("Second minimum not possible.\n");
        return -1;
    }

    int min1, min2;

    // Initialize first two elements
    if (a[0] < a[1])
    {
        min1 = a[0];
        min2 = a[1];
    }
    else
    {
        min1 = a[1];
        min2 = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2 && a[i] != min1)
        {
            min2 = a[i];
        }
    }

    return min2;
}

int main()
{
    int arr[50], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = secondMin(arr, n);
    printf("Second Min Element: %d\n", result);

    return 0;
}