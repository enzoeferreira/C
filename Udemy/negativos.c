#include <stdio.h>

int main()
{
    int n, i, negativos, neg[10], vet[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if (vet[i] < 0)
        {
            neg[negativos] = vet[i];
            negativos++;
        }
    }

    printf("NUMEROS NEGATIVOS: \n");
    
    for (i = 0; i < negativos; i++)
    {
        printf("%d\n", neg[i]);
    }
    
    return 0;
}