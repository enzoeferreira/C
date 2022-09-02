#include <stdio.h>
#include <string.h>

void cleanInput()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu nome: ");
    cleanInput();
    fgets(nome, 50, stdin);

    printf("IDADE = %d\n", idade);
    printf("NOME = %s\n", nome);

    printf("Press ENTER key to Continue\n");  
    getchar(); 

    return 0;
}