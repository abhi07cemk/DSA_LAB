#include <stdio.h>

int secondMax(int a[], int n)
{
    if (n < 2)
    {
        printf("Second maximum not possible.\n");
        return -1;
    }

    int max1, max2;

    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else if (a[1] > a[0])
    {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }

    return max2;
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

    int result = secondMax(arr, n);
    if (result != -1)
        printf("Second Max Element: %d\n", result);

    return 0;
}