#include <stdio.h>

int secondmax(int arr[], int n)
{
    int max1, max2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    return max2;
}

int main()
{
    int arr[10], n;
    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int secmax = secondmax(arr, n);
    printf("Second Max : %d\n", secmax);

    return 0;
}
