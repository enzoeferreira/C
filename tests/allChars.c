// Teste de todos caracteres char (0 a 256)

#include <stdio.h>

int main()
{
    int n;
    char c;

    for(n = 0; n <= 256; n++)
    {
        c = n;
        printf("n = %d, c = %c\n", n, c);
    }
    
    return 0;
}