#include <stdio.h>
#include "my_mat.h"

int main()
{
    int matrix[N][N];
    int kazar[N][N];

    char x;
    scanf("%c", &x);
    while (1)
    {
        if (x == 'A')
        {
            scanMatrix(matrix);
            kazarmatrix(matrix, kazar);
        }
        else if (x == 'B')
        {
            b(kazar);
        }
        else if (x == 'C')
        {
            c(kazar);
        }
        else if (x == 'D')
        {
            break;
        }
        scanf("%c", &x);
    }

    return 0;
}