# Estudos em C
- ### [Udemy](https://www.udemy.com/course/curso-algoritmos-logica-de-programacao/)

# Lembretes
## Esqueleto Padrão

```cpp
int main()
{
    return 0;
}
```

## Syntax

```cpp
printf(""); -> print
// Precisa da biblioteca stdio.h

scanf("%placeholder", &var); -> textos e digitos sem espaços, no caso de %s não usar &
// Precisa da biblioteca stdio.h
```

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

```cpp
int
long int
long long int
float
double
char
char nome[n]
```

### - Atribuição de valor

```cpp
int a = 5;
double b = 2.5;
char c = 'V';
strcpy(nome, "Carlos");
```

Casting

```cpp
int x;
double y;

y = (tipo) x;
```


### - Placeholders

    %d/%i -> int
    %li   -> long int
    %lli  -> long long int
    %f    -> float
    %lf   -> double
    %c    -> char
    %s    -> char[]

    Obs: colocar um .x, sendo x algum número inteiro (Ex: .2), entre o % e o placeholder limita o número de casas decimais, pelo contrário o número terá 6 (mesmo que complete com 0's)

Exemplo de uso:

```cpp
printf("%d\n", x) // Imprime a variável inteira x (\n finaliza a linha)
printf("%.2lf", y) // Imprime a variável double y (2 casas decimais)
```

## Funções importantes
### - Limpar entrada (p/ usar fgets)

```cpp
/*
 * Usar para limpar entrada antes do fgets
 */

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
```
### - Ler texto (fgets + tira o ENTER)

```cpp
void ler_texto(char var, int lenght)
{
    fgets(var, lenght, stdin);
    strtok(var, "\n");
}
```