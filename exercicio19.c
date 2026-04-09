#include <stdio.h>

int main()
{
    char entrada;
    float altura,pesoIdeal;
    printf("Digite se vc e homem ou mulher!\n");
    printf("H para homem/ M para mulher:");
    scanf("%c",&entrada);

    if(entrada == 'h' || entrada == 'H')
    {
        printf("Digite a sua altura:");
        scanf("%f",&altura);
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal e de:%1.f",pesoIdeal);
    }else if (entrada == 'M' || entrada == 'm')
    {
        printf("Digite a sua altura:");
        scanf("%f",&altura);
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e de:%1.f",pesoIdeal);
    }else
    {
         printf("Digite algo coerente!");
    }  
       
}