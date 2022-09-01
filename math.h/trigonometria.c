#include <stdio.h>
#include <math.h>

#define pi 3.141592

double cossec(double ang)
{
    return (1 / sin(ang));
}

double cotan(double ang)
{
    return (1 / tan(ang));
}

double sec(double ang)
{
    return (1 / cos(ang));
}

void trigonometria(char unidade)
{
    double rad, graus, ang;
    int cosIgual0 = 0;
    int senIgual0 = 0;
    
    if (unidade == 'R' || unidade == 'r')
    {
        printf("Digite a medida em pi radianos (0 a 2): ");
        scanf("%lf", &rad);
        
        ang = rad * pi;
    }
        else if (unidade == 'G' || unidade == 'g')
        {
            printf("Digite a medida em graus (0 a 360): ");
            scanf("%lf", &graus);

            ang = graus * (pi / 180);
        }

    if (rad == 0.5 || rad == 1.5 || graus == 90 || graus == 270)
    {
        cosIgual0 = 1;
    }
    if (rad == 0.0 || rad == 1.0 || graus == 0 || graus == 180)
    {
        senIgual0 = 1;
    }

    printf("Sen = %.3lf\n", sin(ang));
    printf("Cos = %.3lf\n", cos(ang));
    if (cosIgual0)
    {
        printf("Tg = Nao Existe\n");
        
        printf("\nCossec = %.3lf\n", cossec(ang));
        printf("Sec = Nao Existe\n");
        printf("Cotg = %.3lf\n", cotan(ang));
    }
        else if (senIgual0)
        {
            printf("Tg = %.3lf\n", tan(ang));

            printf("\nCossec = Nao Existe\n");
            printf("Sec = %.3lf\n", sec(ang));
            printf("Cotg = Nao Existe\n");
        }
            else
            {
                printf("Tg = %.3lf\n", tan(ang));

                printf("\nCossec = %.3lf\n", cossec(ang));
                printf("Sec = %.3lf\n", sec(ang));
                printf("Cotg = %.3lf\n", cotan(ang));
            }
}

int main()
{
    double rad, graus;
    char unidade;

    printf("Quer a unidade de medida em radianos ou graus? (R/G) ");
    scanf("%c", &unidade);

    trigonometria(unidade);

    printf("\nPressiona ENTER para finalizar a execucao\n");
    getchar();

    return 0;
}