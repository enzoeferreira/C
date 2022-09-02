// Inclusão de Bibliotecas
#include <stdio.h>
#include <math.h>

// Definição da constante pi
#define pi 3.141592

// Funções para Secante, Cossecante e Cotangente
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

// Função para cálculo das funções trigonométricas dependendo da unidade do angulo (rad ou graus)
void trigonometria(char unidade)
{
    double rad, graus, ang;
    int cosIgual0 = 0;
    int senIgual0 = 0;
    
    // Caso Usuário queira em pi radianos
    if (unidade == 'R' || unidade == 'r')
    {
        printf("Digite a medida em pi radianos (0 a 2): ");
        scanf("%lf", &rad);
        
        ang = rad * pi;
    }
        // Caso Usuário queira em graus
        else if (unidade == 'G' || unidade == 'g')
        {
            printf("Digite a medida em graus (0 a 360): ");
            scanf("%lf", &graus);

            ang = graus * (pi / 180);
        }

    // pi/2, 3pi/2, 90° e 270°: cos(x) = 1
    if (rad == 0.5 || rad == 1.5 || graus == 90 || graus == 270)
    {
        cosIgual0 = 1;
    }
    // 0pi, pi, 0° e 180°: sen(x) = 1
    if (rad == 0.0 || rad == 1.0 || graus == 0 || graus == 180)
    {
        senIgual0 = 1;
    }

    // Sen e Cos estão definidas em todo dominio
    printf("Sen = %.3lf\n", sin(ang));
    printf("Cos = %.3lf\n", cos(ang));
    if (cosIgual0) // Tg (sen/cos) e Sec (1/cos) são 1/0 -> Indeterminação
    {
        printf("Tg = Nao Existe\n");
        
        printf("\nCossec = %.3lf\n", cossec(ang));
        printf("Sec = Nao Existe\n");
        printf("Cotg = %.3lf\n", cotan(ang));
    }
        else if (senIgual0) // Cotg (cos/sen) e Cossec (1/sen) são 1/0 -> Indeterminação
        {
            printf("Tg = %.3lf\n", tan(ang));

            printf("\nCossec = Nao Existe\n");
            printf("Sec = %.3lf\n", sec(ang));
            printf("Cotg = Nao Existe\n");
        }
            else    // Todas funções trigonométricas estão definidas nesse domínio
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
    getchar();

    return 0;
}