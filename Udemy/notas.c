#include <stdio.h>

int main()
{
    double n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    getchar();

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    getchar();

    printf("NOTA FINAL = %.1lf", n1 + n2);

    if ((n1 + n2) < 60)
    {
        printf("\nREPROVADO");
    }
    
    return 0;
}