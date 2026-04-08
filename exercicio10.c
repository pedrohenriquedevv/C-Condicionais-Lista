#include <stdio.h>

int main()
{
    float custoFabrica;
    printf("Digite o custo de fabrica deste carro: R$");
    scanf("%f",&custoFabrica);

    if(custoFabrica <= 12.000)
    {
        custoFabrica = custoFabrica * 1.05;
        printf("Esse carro e isento de Imposto\n");
        printf("Esse carro possui 5 do distribuidor\n");
        printf("O preco do carrro ficou de R$:%.3f",custoFabrica);
    }else if(custoFabrica <= 25.000)
    {
        custoFabrica = (custoFabrica * 1.10) * 1.15;
        printf("Esse carro tem 15 Imposto\n");
        printf("Esse carro possui 10 do distribuidor\n");
        printf("O preco do carrro ficou de R$:%.3f",custoFabrica);
    } else
    {
        custoFabrica = (custoFabrica * 1.15) * 1.2;
        printf("Esse carro tem 20 Imposto\n");
        printf("Esse carro possui 15 do distribuidor\n");
        printf("O preco do carrro ficou de R$:%.3f",custoFabrica);
    }

}