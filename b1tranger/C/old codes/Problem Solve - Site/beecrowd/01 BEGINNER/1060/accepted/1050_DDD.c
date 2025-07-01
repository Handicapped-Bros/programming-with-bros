#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==61)
    {
        printf("Brasilia\n");
    }
    else if(n==71)
    {
        printf("Salvador\n");
    }
    else if(n==11)
    {
        printf("Sao Paulo\n");
    }
    else if(n==21)
    {
        printf("Rio de Janeiro\n");
    }
    else if(n==32)
    {
        printf("Juiz de Fora\n");
    }
    else if(n==19)
    {
        printf("Campinas\n");
    }
    else if(n==27)
    {
        printf("Vitoria\n");
    }
    else if(n==31)
    {
        printf("Belo Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}


/*
Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:




If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

Input Sample	Output Sample
11

Sao Paulo

*/

