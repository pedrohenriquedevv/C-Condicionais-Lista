#include <stdio.h>

int main()
{
    int idade;
    float peso;
    printf("Digite a sua idade:");
    scanf("%i",&idade);
    printf("Digite o seu peso:");
    scanf("%f",&peso);

    if(idade < 20)
    {
        if (peso <=60)
        {
            printf("9");
        }
        else if(peso >= 60 && peso <= 90)
        {
            printf("8");
        }else
        {
            printf("7");
        }
    }else if(idade >= 20 && idade <= 50)
    {
         if (peso <=60)
        {
            printf("6");
        }
        else if(peso >= 60 && peso <= 90)
        {
            printf("5");
        }else
        {
            printf("4");
        }
    }else
    {
         if (peso <=60)
        {
            printf("3");
        }
        else if(peso >= 60 && peso <= 90)
        {
            printf("2");
        }else
        {
            printf("1");
        }
    }
}