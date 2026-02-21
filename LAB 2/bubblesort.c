#include<stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr, j, j+1);
            }
        }
    }
}
int main()
{
    int arr[] = {3,4,1,2,6,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);

    printf("Sorted Array : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}