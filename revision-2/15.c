#include <stdio.h>

int string_length(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

int main()
{
    char str[100] = "hello";

    int len = string_length(str);

    printf("Length of the string: %d\n", len);

    return 0;
}