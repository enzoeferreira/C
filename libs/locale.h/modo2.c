/*
 * Neste modo, é necessário trocar o modo de encoding do VSCODE
 * Para isso:
 * Clicar no canto inferior direito em "UTF-8"
 * Clicar em "Reopen with Encoding"
 * Clicar em "Western (ISO 8859-1)"
 * 
 * Todos os acentos e caracteres especiais serão alterados, então
 * é necessário mudá-los novamente para a versão correta
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Este é um teste de acentuação");

    getchar();
    return 0;
}