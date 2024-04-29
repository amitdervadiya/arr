#include <stdio.h>

int main()
{
    char str1[100] = "hello";
    char str2[100] = "world";

    int i = 0;

    while (str1[i]!= '\0' && str2[i]!= '\0')
    {
        if (str1[i]!= str2[i])
        {
            break;
        }

        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("%s is equal to %s.\n", str1, str2);
    }
    else if (str1[i] < str2[i])
    {
        printf("%s comes before %s.\n", str1, str2);
    }
    else
    {
        printf("%s comes after %s.\n", str1, str2);
    }

    
}