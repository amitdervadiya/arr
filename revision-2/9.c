#include <stdio.h>
void main()
{
    int arr[3][3], sum=0;
    float avr;

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter elements of array ");
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);
            sum=sum+arr[i][j];
          
        }
        printf("\n");
    }
      printf("the total sum is %d\n",sum);
}