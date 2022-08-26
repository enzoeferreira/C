#include <stdio.h>

int main()
{
    int idade, soma, n;
    double media;

    printf("Digite as idades:\n")/
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
        else
        {
            soma = idade;
            n = 1;
            
            while (idade > 0)
            {
                scanf("%d", &idade);
                if (idade > 0)
                {
                    soma += idade;
                    n++;
                }
            }

            media = (double) soma / n;
            printf("MEDIA = %.2lf", media);
        }

    return 0;
}