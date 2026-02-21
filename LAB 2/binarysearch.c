#include<stdio.h>

int binary(int arr[], int n, int target)
{
    int beg = 0;
    int end = n-1;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return  -1;
    
}
int main()
{
    int arr[10], n,key;
    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter Element to search : ");
    scanf("%d", &key);
    int result = binary(arr,n,key);
    if(result != -1)
    {
        printf("Element Found at Index  : %d", result);
    }
    else
    {
        printf("Element Not Found");
    }
    
}