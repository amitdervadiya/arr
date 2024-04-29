#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    int digits = 0;

    while (num != 0)
    {
        num /= 10;
        digits++;
    }

    int sum = 0;
    num = original;

    while (num != 0)
   {
        int digit = num % 10;
        sum += (digit * digit * digit * digits);
        num /= 10;
    }

    if (sum == original)
   {
        printf("%d is an Armstrong number.\n", original);
    }
    else
   {
        printf("%d is not an Armstrong number.\n", original);
    }

}