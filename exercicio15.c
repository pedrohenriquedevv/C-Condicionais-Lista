#include <stdio.h>

int main()
{
    int entrada;
    float dinheiro;

    printf("Banco Investimentos\n");
    printf("////////////////////\n");
    printf("Tabela dos Tipos de Investimento\n");
    printf("1- Poupança 3 Por cento ao mes!\n");
    printf("2- Fundos de Renda Fixa 4 Por cento ao mes!\n");
    scanf("%i",&entrada);

    switch (entrada)
    {
    case 1:
        printf("Tipo de investimento Poupança!\n");
        printf("Insira o valor do investimento:R$");
        scanf("%f",&dinheiro);    
        dinheiro = dinheiro * 1.03;
        printf("Seu dinheiro ao final do mes rendera mais ou menos:R$%2.fz\n",dinheiro);
        break;
    case 2:
        printf("Tipo de investimento Fundos de Renda Fixa!\n");
        printf("Insira o valor do investimento:R$");
        scanf("%f",&dinheiro);
        printf("Seu dinheiro ao final do mes rendera mais ou menos:R$%2.f\n",dinheiro);
        dinheiro = dinheiro * 1.04;
    break;
    default:
    printf("Voce tem que escolher uma opção correta!");
        break;
    }

}