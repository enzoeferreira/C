#include <stdio.h>

int main()
{
    int n, i, j, negativos;

    negativos = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);
    getchar();

    int mat[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elemento[%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            getchar();

            if (mat[i][j] < 0)
            {
                negativos++;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", negativos);
    
    return 0;
}