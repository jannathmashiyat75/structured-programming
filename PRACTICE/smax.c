#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    int second = arr[0];
    int found = 0;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            second = max;
            max = arr[i];
            found = 1;
        }
        else if(arr[i] < max)
        {
            if(found == 0 || arr[i] > second)
            {
                second = arr[i];
                found = 1;
            }
        }
    }

    if(found)
        printf("Second largest = %d", second);
    else
        printf("No second distinct largest element");

    return 0;
}