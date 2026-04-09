#include <stdio.h>

int main()
{
    int codigo;
    printf("Digite o codgio de um produto para descobri a origem:");
    scanf("%i",&codigo);

    if(codigo == 1)
    {
        printf("Sul");
    }else if(codigo == 2)
    {
        printf("Norte");
    }else if(codigo == 3)
    {
        printf("Leste");
    }else if(codigo == 4)
    {
        printf("Oeste");
    }else if(codigo == 5 || codigo == 6)
    {
        printf("Nordeste");
    }else if(codigo >= 7 && codigo <= 9)
    {
        printf("Sudeste");
    }else if(codigo >= 10 && codigo <= 20)
    {
        printf("Centro-oeste");
    }else if(codigo >= 21 && codigo <= 30)
    {
        printf("Nordeste");
    }
}