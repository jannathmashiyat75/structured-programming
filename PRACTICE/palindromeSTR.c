#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, found = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            found = 0;
            break;
        }
    }

    if(found == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}