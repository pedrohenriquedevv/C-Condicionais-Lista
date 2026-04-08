#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o seu salario para ver seu aumento");
    scanf("%f",&salario);

    if(salario <= 300)
    {
        salario = salario * 1.50;
        printf("Seu novo salario com aumento de 50 e de R$: %.2f",salario);
    }else if(salario <= 500)
    {
        salario = salario * 1.40;
        printf("Seu novo salario com reajuste de 40 é de R$: %.2f",salario);
    }else if(salario <= 700)
    {
        salario = salario * 1.30;
        printf("Seu novo salario com reajuste de 30 é de R$: %.2f",salario);        
    }else if(salario <= 800)
    {
        salario = salario * 1.20;
        printf("Seu novo salario com reajuste de 20 é de R$: %.2f",salario);        
    }else if(salario <= 1000)
    {
        salario = salario * 1.10;
        printf("Seu novo salario com reajuste de 10 é de R$: %.2f",salario);        
    }else
    {
        salario = salario * 1.05;
        printf("Seu novo salario com reajuste de 5 é de R$: %.2f",salario);        
    }
}