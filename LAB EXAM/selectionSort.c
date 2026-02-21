#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr,i, min_index);
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

    selectionSort(arr,n);

    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}