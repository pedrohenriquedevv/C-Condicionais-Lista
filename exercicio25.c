#include <stdio.h>

int main()
{
    float h,horas,faltas;
    printf("digite as horas extras:");
    scanf("%f",&horas);
    printf("Digite as horas faltadas:");
    scanf("%f",&faltas);

    h = h = horas - (2.0 / 3.0 * (faltas));
    
    if(h > 2400)
    {
        printf("Gratificação:R$500,00\n");
    }else if(h >= 1800)
    {
        printf("Gratificação:R$400,00\n");
    }else if(h >= 1200)
    {
        printf("Gratificação:R$300,00\n");
    }else if(h >= 600)
    {
        printf("Gratificação:R$200,00\n");
    }else
    {
        printf("Gratificação:R$100,00\n");
    }
}