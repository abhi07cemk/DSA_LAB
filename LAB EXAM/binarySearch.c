#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int beg = 0;
    int end = n - 1;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[50], n, key, result;

    printf("Enter number of elements (sorted order): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if(result != -1)
        printf("Element found at position %d\n", result + 1);
    else
        printf("Element not found\n");

    return 0;
}