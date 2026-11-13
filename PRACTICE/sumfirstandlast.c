#include <stdio.h>

int main()
{
    int n, i, arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d", arr[0] + arr[n-1]);

    return 0;
}