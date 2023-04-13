- [Estudos em C](#estudos-em-c)
- [Syntax](#syntax)
  - [Comentários](#comentários)
  - [Pré-processador](#pré-processador)
    - [#include](#include)
    - [#define e #undef](#define-e-undef)
      - [Funções genéricas](#funções-genéricas)
  - [Esqueleto Padrão](#esqueleto-padrão)
  - [Operadores condicionais e comandos de repetição](#operadores-condicionais-e-comandos-de-repetição)
    - [if()](#if)
      - [Ternário](#ternário)
    - [while()](#while)
      - [do](#do)
    - [for()](#for)
    - [switch()](#switch)
  - [Desvios incondicionais (break, continue, goto)](#desvios-incondicionais-break-continue-goto)
  - [Operadores](#operadores)
    - [Operadores bit a bit](#operadores-bit-a-bit)
  - [Declaração de variáveis](#declaração-de-variáveis)
    - [Qualificadores:](#qualificadores)
      - [auto](#auto)
      - [extern](#extern)
      - [register](#register)
      - [static](#static)
      - [const](#const)
      - [volatile](#volatile)
    - [Tipos de variáveis:](#tipos-de-variáveis)
      - [typedef](#typedef)
      - [sizeof()](#sizeof)
    - [Modificadores](#modificadores)
      - [Sinônimos](#sinônimos)
  - [Atribuição de valor](#atribuição-de-valor)
  - [Casting](#casting)
  - [Ponteiros](#ponteiros)
    - [Ponteiro de Função](#ponteiro-de-função)
    - [Ponteiro void](#ponteiro-void)
- [Bibliotecas](#bibliotecas)
  - [\<STDIO.H\>](#stdioh)
    - [printf()](#printf)
      - [Especificação de conversão:](#especificação-de-conversão)
      - [\[flags\]](#flags)
      - [\[largura\]](#largura)
      - [\[.precisão\]](#precisão)
      - [\[tamanho\] (Placeholders)](#tamanho-placeholders)
    - [putc()](#putc)
    - [putchar(int c)](#putcharint-c)
    - [puts()](#puts)
    - [getc() e fgetc()](#getc-e-fgetc)
    - [getchar(void)](#getcharvoid)
    - [scanf()](#scanf)
      - [Especificadores de conversão](#especificadores-de-conversão)
      - [Flags](#flags-1)
    - [gets()](#gets)
    - [fgets()](#fgets)
  - [\<STRING.H\>](#stringh)
    - [strcpy()](#strcpy)
    - [strcat()](#strcat)
    - [strlen()](#strlen)
    - [strcmp()](#strcmp)
    - [strchr()](#strchr)
    - [strstr()](#strstr)
    - [tolower()](#tolower)
    - [toupper()](#toupper)
  - [\<STDLIB.H\>](#stdlibh)
    - [malloc()](#malloc)
    - [calloc()](#calloc)
    - [free()](#free)
    - [realloc()](#realloc)
- [Funções](#funções)
  - [Criação de funções](#criação-de-funções)
  - [printf()](#printf-1)
  - [Funções importantes](#funções-importantes)
    - [Limpar entrada (p/ usar fgets)](#limpar-entrada-p-usar-fgets)
    - [Ler texto (fgets + tira o ENTER)](#ler-texto-fgets--tira-o-enter)

# <b>Estudos em C</b>

- ### [Udemy](https://www.udemy.com/course/curso-algoritmos-logica-de-programacao/)
- ### [Youtube Playlist - Ponteiros (Canal De aluno para aluno)](https://youtube.com/playlist?list=PLa75BYTPDNKbhUVggmU3JUEBPibvh0C2t)

# <b>Syntax</b>

## <b>Comentários</b>

```c
// Comentários na linha utilizam "//"

/*
 * Comentários em várias linhas
 * utilizam no início "/*"
 * e no fim o inverso
 */
```

## <b>Pré-processador</b>

### <b>#include</b>

```c
#include <arquivo>
#include "arquivo"
/**
 * O pré-processador substitui a linha pelo conteúdo do arquivo
 * 
 * <arquivo> é procurado em diretórios padrão
 * "arquivo" é procurado no próprio diretório (Ou no diretório indicado)
 */
```

### <b>#define e #undef</b>

```c
#define identificador token
// O pré-processador substitui as ocorrências do identificador por tokens
#undef identificador
// A definição é desativada a partir desse ponto
```

#### <b>Funções genéricas</b>

```c
#define quad(x) ((x)*(x))

quad(2)       // ((2)*(2))
quad(2+2)     // ((2+2)*(2+2))
quad(quad(2)) // ((((2)*(2)))*(((2)*(2))))
```
```c
#define min(x,y) (((x<y)) ? (x) : (y))
#define min(a,b,c,d) min(min(a,b), min(c,d))
```

## <b>Esqueleto Padrão</b>

```c
int main()
{
    return 0;
}
```

## <b>Operadores condicionais e comandos de repetição</b>

### <b>if()</b>

```c
if(condição)
{
    // Sentenças
}
else if(condição 2)
{
    // Sentenças
}
else
{
    // Sentenças
}
```

#### <b>Ternário</b>

```c
condição ? verdadeiro : falso
```

### <b>while()</b>

```c
while(condição)
{
    // Sentenças
}
```

#### <b>do</b>

```c
do
{
    // Sentenças
} while (condição);
// No "do" o teste é feito depois, então executará ao menos 1x
```

### <b>for()</b>

```c
for(inicio; condição; incremento)
{
    // Sentenças
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
    // Sentenças
    incremento;
}
```

### <b>switch()</b>

```c
switch(expressão_integral)
{
    case constante_integral:
        // Sentenças

    case constante_integral:
        // Sentenças

    default:
        // Sentenças
}
```

## <b>Desvios incondicionais (break, continue, goto)</b>

Não recomendado por quebrar fluxo de comandos e piorar legibilidade

```c
break; // Termina uma repetição ou switch

continue; // Interrompe apenas uma iteração, voltando pro teste
// Pode ser usado em for, while e do

goto identificador;
// Salta para uma sentença rotulada, por exemplo
identificador : sentença;
```

## <b>Operadores</b>

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
    ...
    var op= expressão equivale a var = var op expressão
    Ex: i /= 2 equivale a i = i/2

    && -> e
    || -> ou
    !  -> não
    Obs: && e || param de executar se o resultado puder ser decidido

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

### <b>Operadores bit a bit</b>

Se aplicam a tipos integrais
Aplicam a operação bit a bit

    & -> and
    | -> or
    ^ -> xor
    ~ -> not
    << -> Deslocamento à esquerda
    >> -> Deslocamento à direita

Exemplo:

```
  1011 0101
& 1111 0110
  ---------
  1011 0100

  1011 0101
| 1111 0110
  ---------
  1111 0111

  1011 0101
       << 1
  ---------
  0110 1010
OBS: Deslocar p/ a esquerda é equivalente a multiplicar por 2

  1011 0101
       >> 1
  ---------
  0101 1010
```

## <b>Declaração de variáveis</b>

    qualificador* modificador* tipo nome1, nome2, ...;

### <b>Qualificadores:</b>

#### <b>auto</b>
Variáveis locais a um bloco (a memória é liberada quando sai)
```c
auto tipo nome;
```

#### <b>extern</b>
Variáveis globais fora de uma função (aloca memória permanente)
```c
extern tipo nome;
```

#### <b>register</b>
Variável que vai ser mantida em um registrador da CPU
Melhora o desempenho de operações realizadas várias vezes
```c
register tipo nome;
```

#### <b>static</b>
Variável local, faz com que a variável não seja recriada a cada chamada da função
```c
static tipo nome;
```

#### <b>const</b>
Variável que não pode ser alterada
```c
const tipo nome;
```

#### <b>volatile</b>
Variável que pode ser alterada pelo hardware
```c
extern volatile tipo nome;
```
Variável que pode ser alterada pelo hardware mas não pelo programador
```c
extern const volatile tipo nome;
```

### <b>Tipos de variáveis:</b>

```c
int
float
double
char
char vetor[n]
char matriz[m][n]
```

#### <b>typedef</b>

```c
typedef int inteiro; // Cria o sinônimo "inteiro" para int
typedef unsigned int natural; // Cria o sinônimo "natural" para int
```

#### <b>sizeof()</b>

Retorna um inteiro indicando quantos bytes tem seu argumento

```c
sizeof(int) // Retorna o n° de bytes para o tipo "int"
sizeof(n) // Retorna o n° de bytes para a variável "n"
```

### <b>Modificadores</b>

    short     -> int
        Geralmente o compilador armazena menos espaço

    long      -> int e double
        Geralmente o compilador armazena mais espaço

    long long -> int

    unsigned  -> char e int
        Inteiro sem sinal (0+)

    signed    -> char e int
        Inteiro com sinal

#### <b>Sinônimos</b>

    int = signed int
    short = short int
    long = long int
    long long = long long int
    unsigned = unsigned int
    signed = signed int = int

## <b>Atribuição de valor</b>

```c
int a = 5;
double b = 2.5;
char c = 'V';
strcpy(nome, "Carlos");
```

## <b>Casting</b>

```c
int x;
double y;

y = (tipo) x;
```

## <b>Ponteiros</b>

```c
tipo *ponteiro; // Declara um ponteiro
ponteiro = &x;  // APONTA o ponteiro para o endereço de memória (&) da variável "x"
*ponteiro = y;  // O VALOR do ponteiro apontando pra a variável "x" vai ser o valor da variável "y"
x = *ponteiro // variável "x" recebe o VALOR APONTADO pelo ponteiro

tipo *ponteiro =  &x // Declara o ponteiro e já aponta para o endereço da variável "x"
```

### <b>Ponteiro de Função</b>

Como ponteiro pra função única
```c
tipo funcao(tipo1 var1, tipo2 var2); // Função
tipo (*funcaoptr)(tipo1, tipo2); // Ponteiro da função
funcaoptr = funcao; // Ponteiro aponta pra função
funcaoptr(argumento); // Coloca argumento na função
```
Como ponteiro para array de funções
```c
int sum(int a, int b);      // Função soma
int subtract(int a, int b); // Função subtração
int multiply(int a, int b); // Função multiplicação
int divide(int a, int b);   // Função divisão

int(*op[4])(int, int); // Declara array de ponteiros "op" com 4 ponteiros de função
op[0] = sum;
op[1] = subtract;
op[2] = multiply;
op[3] = divide;
// Essas 5 linhas podiam ser substituidas por int(*op[])() = {sum, subtract, multiply, divide};
resultado = op[x](a, b) // Usa a operação "x" em 'a' e 'b' 
```

### <b>Ponteiro void</b>
Aponta para qualquer tipo (Lembrar de usar um casting antes)
```c
int x = 33;
float y = 12.4;
char c = 'a';
void *ptr;
  
ptr = &x;
printf("void ptr aponta para %d\n", *((int *)ptr));
ptr = &y;
printf("void ptr aponta para %f\n", *((float *)ptr));
ptr = &c;
printf("void ptr aponta para %c", *((char *)ptr));
```
Útil para criação de funções que podem receber ou devolver um tipo de dado não especificado

# <b>Bibliotecas</b>

## <b><STDIO.H></b>

### <b>printf()</b>

Saída formatada

```c
int printf(const char *fmt, ...)
// Imprime os parâmetros na lista ... em stdout usando a cadeia fmt para determinar como
// Retorna: número de caractéres impressos ou um número negativo se houver erro
```

#### <b>Especificação de conversão:</b>

%[flags][largura][.precisão][tamanho]conversão

#### <b>[flags]</b>

    0   -> Usa zeros ao invés de espaços para alinhar à direita
    -   -> Alinha à esquerda
    +   -> Sempre acrescente o sinal de + ou -
    " " -> Acrescenta um espaço antes de um número positivo
    # <b>  -> Forma alternativa para g,G,f,F,e,E,o,x,X

#### <b>[largura]</b>

Substitui "\*" com a quantidade necessária entregue pelos argumentos

```c
printf("%*d", largura, var) // Imprime "var" com * <- largura
// Adicionará espaços em branco se necessário, se não, imprimirá o n° normalmente

printf("%*.*f", largura, precisao, var) // Imprime "var" com largura e precisão
```

#### <b>[.precisão]</b>

Conversões d, i, o, u, x, X: Número mínimo de dígitos que deve ser mostrado

Conversões a, A, e, E, f, F: Número mínimo à direita da vírgula

Conversões g, G: Número máximo de dígitos significativos

Conversões s, S: Número máximo de caracteres impressos

#### <b>[tamanho]</b> (Placeholders)

    %d/%i -> int
    %f    -> float
    %lf   -> double
    %c    -> char
    %s    -> cadeia
    %p    -> endereço


    %u    -> unsigned int

    %hi   -> short int
    %hu   -> short int (unsigned)

    %li   -> long int
    %lu   -> long int (unsigned)

    %lli  -> long long int
    %llu  -> long long int (unsigned)

    %e  -> (float) Notação científica (Ex: 3.16e7 = 3.16*10^7)
    %le -> (double) Notação científica

    %Lf -> long double

    %x -> Número hexadecimal

### <b>putc()</b>

Saída não-formatada

```c
int putc(int c, FILE* stream)
// Imprime o inteiro c convertido para unsigned char
// Retorna c convertido para unsigned char ou EOF se houver erro
```

### <b>putchar(int c)</b>

Saída não-formatada
Equivalente a putc(c, stdout)

### <b>puts()</b>

Saída não-formatada

```c
int puts(const char *s)
// Escreve a cadeia *s no monitor, seguida de um \n
// Retorna um número não-negativo se bem-sucedida ou EOF se houver erro
```

### <b>getc() e fgetc()</b>

Entrada não-formatada

```c
int getc(FILE *stream)
int fgetc(FILE *stream)
// Lê o próximo caractere da stream
// Retorna como um unsigned int convertido para int
// Retorna EOF no fim-de-arquivo ou em caso de erro
```

### <b>getchar(void)</b>

Entrada não formatada

```c
// Equivalente a:
getc(stdin)
```

### <b>scanf()</b>

Entrada formatada

```c
int scanf(const char *fmt, ...)
// Usa a cadeia de formato fmt e armazena na lista de endereços ...
// Retorna o n° de variáveis convertidas ou EOF se algo impedir a conversão
```

#### <b>Especificadores de conversão</b>

    %d   -> Inteiro decimal com sinal
    %i   -> Dec, Hexa ou Octal com sinal
    %u   -> Decimal sem sinal
    %o   -> Octal sem sinal
    %x/X -> Hexadecimal sem sinal
    %s   -> Cadeia sem brancos
    %c   -> Cadeia de tamanho w

    %[""]  -> Cadeia com apenas os carac. especificados
    %[^""] -> Cadeia sem os carac. especificados
    $p     -> void
    %n     -> Nada. Armazena o n° de carac. já lidos
    %e/E/f/g -> Número em ponto flutuante com sinal

    Obs: d, i, f, s consomem brancos, já c e [ não

#### <b>Flags</b>

    *  -> O campo deve ser lido mas não armazenado
    n° -> Limita o número de dígitos lidos com i/f ou símbolos com s
    '  -> Com números, especifica que há separadores de milhar
    m  -> Com cadeias, faz com que a memória suficiente para a cadeia seja alocada

### <b>gets()</b>

Entrada não-formatada

```c
char gets(array); // Guarda uma string em array
// Discarta \n e não o coloca no buffer
```

### <b>fgets()</b>

Entrada não formatada

```c
fgets(var, lenght, stdin); // textos e digitos até a quebra de linha (c/ espaço)

char* fgets(char *s, int n, FILE* stream)
// Lê no máximo n-1 carac. ou até encontrar \n ou EOF
// Armazena em s
// Se o \n for lido, ele é colocado em s. Adiciona \0
// Retorna s ou NULL se houver um erro
```

## <b><STRING.H></b>

### <b>strcpy()</b>

```c
char* strcpy(char *dest, char *src);
/**
 * Copia a string apontada por "src" até '\0' no ponteiro "dest"
 *
 * Retorna:
 * 1) Cópia do destino
 * 2) Zero em caso de sucesso, não-zero em erro
 */
```

### <b>strcat()</b>

```c
char* strcat(char *dest, char *src);
/**
 * Concatena a string apontada por "src" até o '\0' no fim do ponteiro "dest"
 * src[0] substitui o '\0' no fim de dest
 * 
 * Retorna:
 * 1) Cópia do destino
 * 2) Zero em caso de sucesso, não-zero em erro
 */
```

### <b>strlen()</b>

```c
size_t strlen(char *str);
/**
 * Retorna:
 * Comprimento da string (terminada por '\0')
 */
```

### <b>strcmp()</b>

```c
int strcmp(char *string1, char *string2);
/**
 * Compara string1 com string2 lexicograficamente
 * Retorna:
 * Negativo se string1 < string2
 * Zero se string1 = string2
 * Positivo se string1 > string2
 */
```

### <b>strchr()</b>

```c
char* strchr(char *str, int ch);
/**
 * Encontra a primeira ocorrência do char 'ch'
 * 
 * Retorna:
 * Ponteiro pro caractere encontrado em "str"
 * Ponteiro nulo se não encontrar
 */
```

### <b>strstr()</b>

```c
char* strstr(char *str, char*substring);
/**
 * Encontra a primeira ocorrencia de "substring" em "str"
 * 
 * Retorna:
 * Ponteiro pro primeiro caractere da substring em "str"
 * Ponteiro nulo se não encontrar
 */
```

### <b>tolower()</b>

```c
int tolower(int ch);
/**
 * Converte o caractere 'ch' para sua versão minúscula
 * 
 * Retorna:
 * 1) Versão minúscula do caractere
 * 2) Mesmo caractere caso já seja minúsculo ou não tenha essa versão
 */
```

### <b>toupper()</b>

```c
int toupper(int ch);
/**
 * Converte o caractere 'ch' para sua versão maiúscula
 * 
 * Retorna:
 * 1) Versão maiúscula do caractere
 * 2) Mesmo caractere caso já seja maiúscula ou não tenha essa versão
 */
```

## <b><STDLIB.H></b>

### <b>malloc()</b>

```c
void* malloc(size_t n);
/**
 * Aloca n bytes consecutivos na memória
 * 
 * Retorna:
 * 1) Apontador void para o início da região
 * 2) NULL se não for possível alocar
 */
```

### <b>calloc()</b>

```c
void* calloc(size_t n, size_t t);
/**
 * Aloca n bytes consecutivos na memória
 * Inicializa todos os bits com 0
 * 
 * Retorna:
 * 1) Apontador void para o início da região
 * 2) NULL se não for possível alocar
 */
```

### <b>free()</b>

```c
void* free(void *ptr);
/**
 * Libera a região apontada pelo ponteiro ptr (alocada por malloc, calloc ou realloc)
 * 
 * Retorna:
 * Nada
 */
```

### <b>realloc()</b>

```c
void* realloc(void *ptr, size_t n);
/**
 * Realoca uma região previamente alocada para que fique com "n" bytes
 * 
 * Retorna:
 * 1) Apontador void para o início da região
 * 2) NULL se não for possível alocar
 *    Nesse caso a região original permanece inalterada
 */
```

# <b>Funções</b>

## <b>Criação de funções</b>

```c
tipo|void nome(args)
{
  // Sentenças

  return var;
}
// Obs: void é usado quando a função não retornará nada
```

## <b>printf()</b>

## <b>Funções importantes</b>

### <b>Limpar entrada (p/ usar fgets)</b>

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

### <b>Ler texto (fgets + tira o ENTER)</b>

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