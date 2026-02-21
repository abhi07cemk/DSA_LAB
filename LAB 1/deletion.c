#include<stdio.h>
int main()
{
    int arr[10], pos, elem, i, n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    // printf("Enter Element : ");
    // scanf("%d", &elem);

    printf("Enter Position : ");
    scanf("%d", &pos);

    for(i = pos; i <= n; i++)
    {
        arr[i] = arr[i+1];
    }
    // arr[pos] = elem;
    n--;

    printf("Updated Array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}