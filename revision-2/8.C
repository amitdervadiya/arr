#include <stdio.h>
void main()
{
    int arr[5], max = arr[0], secondmax = arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number :");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            secondmax= max;
            max = arr[i];
        }
        else if (secondmax < arr[i] && max > arr[i])
        {
            secondmax = arr[i];
        }
    }
    printf("second large element : %d", secondmax);
}