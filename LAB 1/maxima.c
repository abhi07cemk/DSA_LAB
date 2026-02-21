#include<stdio.h>

int max_elem(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10],i,n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The Max Element is : %d", max_elem(arr, n));

}