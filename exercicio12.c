#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o seu salario para ver seu reajuste R$:");
    scanf("%f",&salario);

    if(salario <= 350)
    {
        printf("Você ira receber uma gratificação de R$:100,00");
    }else if(salario <= 600)
    {
        printf("Você ira receber uma gratificação de R$:75,00");
    }else if(salario <= 900)
    {
        printf("Você ira receber uma gratificação de R$:50,00");        
    }else
    {
        printf("Você ira receber uma gratificação de R$:35,00");
    }
}