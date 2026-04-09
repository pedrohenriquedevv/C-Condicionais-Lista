#include <stdio.h>

int main() {
    int categoria;
    float preco, aumento, imposto, novoPreco;
    char situacao;

    printf("Categoria (1-Limpeza, 2-Alimentação, 3-Vestuário): ");
    scanf("%d", &categoria);

    printf("Situação (R-Refrigeração / N-Não): ");
    scanf(" %c", &situacao);

    printf("Preço original R$: ");
    scanf("%f", &preco);
    
    if(preco <= 25) 
    {
        if (categoria == 1) aumento = preco * 0.05;
        else if (categoria == 2) aumento = preco * 0.08;
        else aumento = preco * 0.10;
    } else 
    {
        if (categoria == 1) aumento = preco * 0.12;
        else if (categoria == 2) aumento = preco * 0.15;
        else aumento = preco * 0.18;
    }

    if (categoria == 2 || situacao == 'R' || situacao == 'r') 
    {
        imposto = preco * 0.05;
    } else 
    {
        imposto = preco * 0.08;
    }

    novoPreco = preco + aumento - imposto;

    printf("\nValor do aumento: R$ %.2f", aumento);
    printf("\nValor do imposto: R$ %.2f", imposto);
    printf("\nNovo preço: R$ %.2f\n", novoPreco);


    if (novoPreco <= 50) 
    {
        printf("Classificação: Barato\n");
    } else if (novoPreco < 120) 
    {
        printf("Classificação: Normal\n");
    } else 
    {
        printf("Classificação: Caro\n");
    }
}