#include<stdio.h>

int deletion(int arr[], int pos, int n)
{
    if(pos < 0 || pos >= n)
    {
        printf("\nInvalid Position!\n");
        return n;
    }

    for(int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main()
{
    int arr[20], n, pos;

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Position (0 to %d) : ", n-1);
    scanf("%d", &pos);

    printf("Array before deletion : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    n = deletion(arr, pos, n);  

    printf("\nArray after deletion : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}