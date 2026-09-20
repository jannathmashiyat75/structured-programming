#include <stdio.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str3));
    return 0;
}