#include<stdio.h>
int main()
{
    char greeting[] = "Hello World";
    greeting[0] = 'j';
    printf("%s",greeting);
    return 0;
}