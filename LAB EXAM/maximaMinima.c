#include <stdio.h>

int main()
{
    int arr[20], n;

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\nLargest Element : %d", max);
    printf("\n");
    printf("\nSmallest Element : %d", min);

    return 0;
}