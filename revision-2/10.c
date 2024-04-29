#include <stdio.h>

void multiply_matrices(int m, int n, int p, int q, int mat1[m][n], int mat2[p][q], int result[m][q])
{
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < p; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }
}
int main()
{
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];
    multiply_matrices(2, 3, 3, 2, mat1, mat2, result);

    printf("Product of the matrices:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}