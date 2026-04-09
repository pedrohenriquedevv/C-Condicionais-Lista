#include <stdio.h>

int main()
{
    int codigo,quantidade,preco;
    printf("Digite o codigo do seu produto:");
    scanf("%d",&codigo);
    printf("Digite a quantidade comprada do seu produto:");
    scanf("%d",&quantidade);

    if (codigo >= 1 && codigo <= 10)
    {
        preco = 10;
        printf("Preco unitario do produto e de R$%i\n",preco);
    }else if(codigo >= 11 && codigo <= 20)
    {
        preco = 15;
        printf("Preco unitario do produto e de R$%i\n",preco);
    }else if(codigo >= 21 && codigo <= 30)
    {
        preco = 20;
        printf("Preco unitario do produto e de R$%i\n",preco);
    }else if(codigo >= 31 && codigo <= 40)
    {
        preco = 30;
        printf("Preco unitario do produto e de R$%i\n",preco);
    }else
    {
        printf("Error!!!");
    }


    preco = preco * quantidade;
    printf("R$%i o preco total\n",preco);


    if(preco < 250)
    {
        preco = preco * 0.95;
    }else if(preco >= 250 && preco <= 500)
    {
        preco = preco * 0.90;
    }else if(preco > 500)
    {
        preco = preco * 0.85;
    }

    printf("Seu preco ficou esse aqui pos descontos:R$%i\n",preco);
}