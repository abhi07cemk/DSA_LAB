#include<stdio.h>

void insertion(int arr[], int n, int value, int pos)
{
    for(int i = n; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;
}

int main()
{
    int arr[20],n, pos, value;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &n);
    }

    printf("Old Array : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Enter Value to Insert : ");
    scanf("%d", &value);
    printf("Enter Position : ");
    scanf("%d", &pos);

    insertion(arr,n,value,pos);
    printf("New Array : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }


}