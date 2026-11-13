#include <stdio.h>

int main()
{
    int n, i, p = 0, neg = 0, zero = 0;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            p++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", zero);

    return 0;
}