#include <stdio.h>

int main()
{
    int N, i, x, soma;
    
    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("Soma = %d\n", soma);

    return 0;
}