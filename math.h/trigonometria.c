#include <stdio.h>
#include <math.h>

#define pi 3.141592

int main()
{
    double rad, graus, ang;
    char unidade;

    printf("Quer a unidade de medida em radianos ou graus? (R/G) ");
    scanf("%c", &unidade);
    
    if(unidade == 'R' || unidade == 'r')
    {        
        printf("Digite um angulo em pi radianos: ");
        scanf("%lf", &rad);

        ang = rad * pi;

        printf("\nSen(%.3lf rad) = %.3lf", rad, sin(ang));
        printf("\nCos(%.3lf rad) = %.3lf", rad, cos(ang));
        printf("\nTg(%.3lf rad) = %.3lf", rad, tan(ang));

        printf("\n\nCossec(%.3lf rad) = %.3lf", rad, (1 / sin(ang)));
        printf("\nSec(%.3lf rad) = %.3lf", rad, (1 / cos(ang)));
        printf("\nCotg(%.3lf rad) = %.3lf", rad, (cos(ang) / sin(ang)));

        printf("\n\nSenh(%.3lf rad) = %.3lf", rad, sinh(ang));
        printf("\nCosh(%.3lf rad) = %.3lf", rad, cosh(ang));
        printf("\nTanh(%.3lf rad) = %.3lf", rad, tanh(ang));
    }
        else if(unidade == 'G' || unidade == 'g')
        {
            printf("Digite um angulo em graus: ");
            scanf("%lf", &graus);

            ang = graus * (pi/180);

            printf("\nSen(%.3lf rad) = %.3lf", graus, sin(ang));
            printf("\nCos(%.3lf rad) = %.3lf", graus, cos(ang));
            printf("\nTg(%.3lf rad) = %.3lf", graus, tan(ang));

            printf("\n\nCossec(%.3lf rad) = %.3lf", graus, (1 / sin(ang)));
            printf("\nSec(%.3lf rad) = %.3lf", graus, (1 / cos(ang)));
            printf("\nCotg(%.3lf rad) = %.3lf", graus, (cos(ang) / sin(ang)));

            printf("\n\nSenh(%.3lf rad) = %.3lf", graus, sinh(ang));
            printf("\nCosh(%.3lf rad) = %.3lf", graus, cosh(ang));
            printf("\nTanh(%.3lf rad) = %.3lf", graus, tanh(ang));
        }
            else
            {
                printf("\nUnidade invalida.");
            }

    return 0;
}