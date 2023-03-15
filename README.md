- [Estudos em C](#estudos-em-c)
- [Syntax](#syntax)
  - [Comentários](#comentários)
  - [Esqueleto Padrão](#esqueleto-padrão)
  - [Comandos de repetição](#comandos-de-repetição)
  - [- Operadores](#--operadores)
  - [- Declaração de variáveis](#--declaração-de-variáveis)
    - [- Modificadores](#--modificadores)
    - [- Sinônimos](#--sinônimos)
      - [- typedef](#--typedef)
  - [- Atribuição de valor](#--atribuição-de-valor)
  - [- Casting](#--casting)
  - [- Placeholders](#--placeholders)
  - [Ponteiros](#ponteiros)
- [Funções](#funções)
  - [printf()](#printf)
  - [puts()](#puts)
  - [scanf()](#scanf)
  - [fgets()](#fgets)
  - [Funções importantes](#funções-importantes)
    - [- Limpar entrada (p/ usar fgets)](#--limpar-entrada-p-usar-fgets)
    - [- Ler texto (fgets + tira o ENTER)](#--ler-texto-fgets--tira-o-enter)

# Estudos em C
- ### [Udemy](https://www.udemy.com/course/curso-algoritmos-logica-de-programacao/)
- ### [Youtube Playlist - Ponteiros (Canal De aluno para aluno)](https://youtube.com/playlist?list=PLa75BYTPDNKbhUVggmU3JUEBPibvh0C2t)

# Syntax

## Comentários

```c
// Comentários na linha utilizam "//"

/*
 * Comentários em várias linhas
 * utilizam no início "/*"
 * e no fim o inverso
 */
```
## Esqueleto Padrão

```c
int main()
{
    return 0;
}
```

## Comandos de repetição

```c
if(condição)
{    
}
else if(condição 2)
{
}
else
{
}

while(condição)
{
}

do
{
} while (condição);

for(inicio; condição; incremento)
{
}
/* Omitindo argumentos:
 * for(;;)
 * 
 * Caso uma variável seja definida dentro do for
 * seu escopo será apenas o for
 */

// Equivalencia do for em while
inicio;
while (condição)
{
    incremento;
}
```

## - Operadores

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

    ++ -> Incremento
    -- -> Decremento
    Obs: n++ != ++n
    n++ incrementa depois de executar, enquanto ++n incrementa antes de executar

Exemplo:
```c
n = 5;
x = n++;
// x = 5 e n = 6

n = 5;
x = ++n;
// x = 6 e n = 6
```

## - Declaração de variáveis

    tipo nome;

Tipos de variáveis:

```c
int
float
double
char
char vetor[n]
char matriz[m][n]
```

### - Modificadores

    short    -> int
        Geralmente o compilador armazena menos espaço
    long     -> int e double
        Geralmente o compilador armazena mais espaço
    unsigned -> char e int
        Inteiro sem sinal (0+)
    signed   -> char e int
        Inteiro com sinal

### - Sinônimos

    int = signed int
    short = short int
    long = long int
    long long = long long int
    unsigned = unsigned int
    signed = signed int = int

#### - typedef

```c
typedef int bool; // Cria o sinônimo "bool" para int
typedef unsigned int natural; // Cria o sinônimo "natural" para int
```

## - Atribuição de valor

```c
int a = 5;
double b = 2.5;
char c = 'V';
strcpy(nome, "Carlos");
```

## - Casting

```c
int x;
double y;

y = (tipo) x;
```

## - Placeholders

    %d/%i -> int
    %li   -> long int
    %lli  -> long long int
    %f    -> float
    %lf   -> double
    %c    -> char
    %s    -> char[]
    %p    -> endereço

    Obs: colocar um x.y, sendo "x" e "'y" algum número inteiro (Ex: 2.2), entre o % e o placeholder
    limita o número de casas antes e depois do ".", por padrão o número terá 6 casas (completando com 0's)

    %e -> Notação científica (Ex: 3.16e7 = 3.16*10^7)
    %x -> Número hexadecimal
    %u -> Decimal sem sinal

Exemplo de uso:

```c
printf("%d\n", x); // Imprime a variável inteira x (\n finaliza a linha)
printf("%.2lf", y); // Imprime a variável double y (2 casas decimais)
```

## Ponteiros

```c
tipo *ponteiro; // Declara um ponteiro
ponteiro = &x;  // APONTA o ponteiro para o endereço de memória (&) da variável "x"
*ponteiro = y;  // O VALOR do ponteiro apontando pra a variável "x" vai ser o valor da variável "y"
x = *ponteiro // variável "x" recebe o VALOR APONTADO pelo ponteiro

tipo *ponteiro =  &x // Declara o ponteiro e já aponta para o endereço da variável "x"
```

# Funções

## printf()

```c
printf(""); // print
// Precisa da biblioteca stdio.h
```

## puts()

```c
puts(""); // print de apenas uma string
// Precisa da biblioteca stdio.h
```

## scanf()

```c
scanf("%placeholder", &var); // textos e digitos sem espaços, no caso de %s não usar "&". Recomendável usar getchar() para consumir o \n ao apertar Enter (ainda no input buffer)
// Precisa da biblioteca stdio.h
```

## fgets()

```c
fgets(var, lenght, stdin); // textos e digitos até a quebra de linha (c/ espaço)
// Precisa da biblioteca string.h
```



## Funções importantes
### - Limpar entrada (p/ usar fgets)

```c
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

```c
/*
 * Usar para ler texto fgets e tirar a quebra de linha causada pelo ENTER
 * (não dispensa o limpar entrada)
 * Necessita da biblioteca string.h
 */

#include <string.h>

void ler_texto(char *var, int lenght)
{
    fgets(var, lenght, stdin);
    strtok(var, "\n");
}
```