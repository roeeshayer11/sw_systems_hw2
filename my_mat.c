#include <stdio.h>
#include "my_mat.h"

#include <limits.h>

int min(int a, int b)
{
    if (a >= b)
        return b;
    return a;
}

//A
void scanMatrix(int matrix1[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
}
//ezer
void printMatrix(int matrix1[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//B
void kazarmatrix(int matrix[N][N], int kazar[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] == 0)
            {
                kazar[i][j] = INT_MAX;
            }
            else
            {
                kazar[i][j] = matrix[i][j];
            }
        }
    }

    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (kazar[i][k] != INT_MAX && kazar[k][j] != INT_MAX)
                    kazar[i][j] = min(kazar[i][j], (kazar[i][k] + kazar[k][j]));
            }
        }
    }
}

void b(int kazar[N][N])
{
    int i, j;
    scanf("%d%d", &i, &j);
    if (kazar[i][j] == INT_MAX || i == j)
        printf("False\n");
    else
        printf("True\n");
}
//c
void c(int kazar[N][N])
{
    int i, j;
    scanf("%d%d", &i, &j);
    if (kazar[i][j] == INT_MAX || i == j)
        printf("-1\n");
    else
        printf("%d\n", kazar[i][j]);
}