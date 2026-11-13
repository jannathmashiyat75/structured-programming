#include <stdio.h>

int main()
{
    int n, i, x, found = 0;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter search element: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Found");
    else
        printf("Not found");

    return 0;
}