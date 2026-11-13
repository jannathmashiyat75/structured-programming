#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, found = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            found = 0;
            break;
        }

        i++;
    }

    if(str1[i] != str2[i])
        found = 0;

    if(found == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}