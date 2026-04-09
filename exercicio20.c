#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade para saber a sua categoria:");
    scanf("%d",&idade);

    if(idade >= 4 && idade <= 6 )
    {
        printf("Infatil");
    }
    else if(idade >= 7 && idade <= 11)
    {
        printf("Juvenil");
    }
    else if(idade >= 12 && idade <= 16)
    {
        printf("Adolescente");
    }
    else if(idade >= 17 && idade <= 31)
    {
        printf("Adulto");
    }
    else
    {
        printf("Senior");
    }
}