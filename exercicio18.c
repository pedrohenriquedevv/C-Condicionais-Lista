#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a sua idade:");
    scanf("%i",&idade);

    if(idade >18)
    {
        printf("Pode ser preso");
    }else
    {
        printf("Conselho tutelar");
    }
}