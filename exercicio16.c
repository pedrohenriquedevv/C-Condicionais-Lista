#include <stdio.h>

int main()
{
    float preco;
    printf("Digite o preco do seu produto para receber o desconto:R$");
    scanf("%f",&preco);

    if(preco >= 100)
    {
        preco = preco * 0.85;
        printf("Seu produto sofre 15 de desconto agora vale:R$%2.f",preco);
    }else if(preco >= 300)
    {
        preco = preco * 0.90;
        printf("Seu produto sofre 10 de desconto agora vale:R$%2.f",preco);
    }else
    {
        printf("Seu produto não sofre desconto");
    }
}