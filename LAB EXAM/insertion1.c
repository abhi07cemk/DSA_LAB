#include<stdio.h>

int insertion(int arr[], int n, int value, int pos)
{
    if(pos < 0 || pos > n)
    {
        printf("Invalid Position!\n");
        return n;
    }

    for(int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = value;

    return n + 1;   
}

int main()
{
    int arr[20], n, pos, value;

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);   
    }

    printf("Old Array : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter Value to Insert : ");
    scanf("%d", &value);

    printf("Enter Position (0 to %d): ", n);
    scanf("%d", &pos);

    n = insertion(arr, n, value, pos);   

    printf("New Array : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}