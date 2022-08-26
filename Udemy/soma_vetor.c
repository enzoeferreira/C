#include <stdio.h>

int main()
{
    int n, i;
    double soma, media, vet[50];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }

    printf("VALORES = ");
    for (i = 0; i < n; i++)
    {
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    printf("SOMA = %.2lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}