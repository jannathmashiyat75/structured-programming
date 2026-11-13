#include <stdio.h>

int main()
{
    int n, i, flag = 1;
    int a[100], b[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Arrays are equal");
    else
        printf("Arrays are not equal");

    return 0;
}