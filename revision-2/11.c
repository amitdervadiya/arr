#include <stdio.h>

int main()
{
    int arr1[5] = {};
    int arr2[5] = {};
    int arr3[5];
    int i, j, k;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number of first array :");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number of second array:");
        scanf("%d", &arr2[i]);
    }

       i = j = k = 0;
    while (i < 5 && j < 5)
    {
        if (arr1[i] == arr2[j])
        {
            arr3[k++] = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (i = 0; i < k; i++)
    {
        printf(" the intersection of two arrays. %d \n", arr3[i]);
    }
}