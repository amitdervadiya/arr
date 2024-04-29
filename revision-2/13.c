#include <stdio.h>

void concatenate_strings(char *str1, char *str2, char *result)
{
    while (*str1!= '\0')
    {
        *result = *str1;
        str1++;
        result++;
    }

    while (*str2!= '\0')
    {
        *result = *str2;
        str2++;
        result++;
    }

    *result = '\0';
}

int main()
{
    char str1[100] = "hello";
    char str2[100] = "world";
    char result[200];

    concatenate_strings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

  
}