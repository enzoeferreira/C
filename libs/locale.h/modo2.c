/*
 * Neste modo, � necess�rio trocar o modo de encoding do VSCODE
 * Para isso:
 * Clicar no canto inferior direito em "UTF-8"
 * Clicar em "Reopen with Encoding"
 * Clicar em "Western (ISO 8859-1)"
 * 
 * Todos os acentos e caracteres especiais ser�o alterados, ent�o
 * � necess�rio mud�-los novamente para a vers�o correta
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Este � um teste de acentua��o");

    getchar();
    return 0;
}