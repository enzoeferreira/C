#include <stdio.h>

int main()
{
    int x, soma;

    printf("Digite um numero: ");
    scanf("%d", &x);

    while(x != 0)
    {
        soma = soma + x;

        printf("SOMA = %d\n", soma);

        printf("Digite outro numero: ");
        scanf("%d", &x);
    }

    return 0;
}