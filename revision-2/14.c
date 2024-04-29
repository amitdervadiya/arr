#include <stdio.h>

int main()
{
    int arr[5] = {'a', 'm', 'i', 't', 'd'};

printf("Original array: \n");
for (int i=0; i<5; i++) {
    printf("%c ",arr[i]);
}
printf("\n\nReversed array:\n");
for (int i=4; i>=0; i--) {
    printf("%c ",arr[i]);
}

   
}