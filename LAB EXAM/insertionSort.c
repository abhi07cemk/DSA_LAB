#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertionSort(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j>0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr,j,j-1);
            }
        }
    }
}

int main()
{
    int arr[20], n;

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    insertionSort(arr,n);

    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}