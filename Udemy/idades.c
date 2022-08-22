#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade1, idade2;
    double idadeMedia;
    char nome1[50], nome2[50];
    
    printf("Dados da primeira pessoa:\nNome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();

    printf("Dados da segunda pessoa:\nNome: ");
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);
    getchar();

    idadeMedia = (idade1 + idade2) / 2.0;

    printf("A idade media entre %s e %s e de %.1lf anos", nome1, nome2, idadeMedia);
    
    return 0;
}