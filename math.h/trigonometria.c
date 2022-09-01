#include <stdio.h>
#include <math.h>

#define pi 3.141592

void trigonometria(char unidade)
{
    double rad, graus, ang;
    
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

    printf("Sen = %.3lf\n", sin(ang));
    printf("Cos = %.3lf\n", cos(ang));

    if (rad == 0.5 || rad == 1.5 || graus == 90 || graus == 270)
    {
        printf("Tg = Nao Existe\n");
    }
        else
        {
            printf("Tg = %.3lf\n", tan(ang));
        }
}

int main()
{
    double rad, graus;
    char unidade;

    printf("Quer a unidade de medida em radianos ou graus? (R/G) ");
    scanf("%c", &unidade);

    trigonometria(unidade);

    return 0;
}