#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o seu salario para ver seu reajuste");
    scanf("%f",&salario);

    if(salario <= 300)
    {
        salario = salario * 1.15;
        printf("Seu novo salario com reajuste de 15 é de R$: %.2f",salario);
    }else if(salario <= 600)
    {
        salario = salario * 1.1;
        printf("Seu novo salario com reajuste de 10 é de R$: %.2f",salario);
    }else if(salario <= 900)
    {
        salario = salario * 1.05;
        printf("Seu novo salario com reajuste de 5 é de R$: %.2f",salario);        
    }else
    {
        printf("Você não tem direito a reajustes!");
    }
}