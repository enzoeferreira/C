#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);


// O código/print ficará nessa parte

    
    printf("Este é um teste de acentuação");

    SetConsoleOutputCP(CPAGE_DEFAULT);

    getchar(); 
    return 0;
}