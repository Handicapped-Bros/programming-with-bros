#include<stdio.h>

int main()
{
    int try, password = 2002;
    while(try!=password)
    {
        //printf("Enter Password: ");
        scanf("%d",&try);
        if(try==password)
        {
            printf("Acesso Permitido\n");
        }
        else
        {
            printf("Senha Invalida\n");
        }

    }
    return 0;
}

