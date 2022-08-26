#include <stdio.h>

int main()
{
    int n, i, somaIdade, menor16;
    double somaAltura;

    menor16 = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int vetPessoas[n], vetIdade[n];
    double vetAltura[n];
    char vetNome[n][50];

    for (i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        
        printf("Nome: ");
        getchar();
        gets(vetNome[i]);

        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        somaIdade += vetIdade[i];

        printf("Altura: ");
        scanf("%lf", &vetAltura[i]);
        somaAltura += vetAltura[i];

        if (vetIdade[i] < 16)
        {
            menor16++;
        }
    }

    printf("\nAltura media: %.2lf", somaAltura / n);
    
    printf("\nPessoas com menos de 16 anos: %.1lf%%\n", (((double)menor16) / n) * 100);
    for (i = 0; i < n; i++)
    {
        if (vetIdade[i] < 16)
        {
            printf("%s\n", vetNome[i]);
        }
    }
    
    return 0;
}