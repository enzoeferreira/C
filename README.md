# Estudos em C
- ### [Udemy](https://www.udemy.com/course/curso-algoritmos-logica-de-programacao/)

# Lembretes
## Syntax

    printf(""); -> precisa da biblioteca stdio.h

### - Operadores

    + -> Adição
    - -> Subtração
    * -> Multiplicação
    / -> Divisão
    % -> Resto da divisão ("mod")

    >  -> Maior
    <  -> Menor
    >= -> Maior ou igual
    <= -> Menor ou igual
    == -> Igual
    != -> Diferente

    && -> e
    || -> ou
    !  -> não

### - Declaração de variáveis

    tipo nome;

Tipos de variáveis:

    int
    long int
    long long int
    float
    double
    char
    char nome[n]

### - Atribuição de valor

    int a = 5;
    double b = 2.5;
    char c = 'V';
    strcpy(nome, "Carlos");

Casting

    int x;
    double y;

    y = (tipo) x;


### - Placeholders

    %d/%i -> int
    %li   -> long int
    %lli  -> long long int
    %f    -> float
    %lf   -> double
    %c    -> char
    %s    -> char[]

Exemplo de uso:

    printf("%d\n", x) // Imprime a variável inteira x (\n finaliza a linha)
    printf("%.2lf", y) // Imprime a variável double y (2 casas decimais)