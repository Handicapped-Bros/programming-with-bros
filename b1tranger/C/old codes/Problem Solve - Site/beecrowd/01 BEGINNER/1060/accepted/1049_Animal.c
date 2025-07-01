#include <stdio.h>
#include <string.h>

int main()
{

    char a[20];
    char b[20];
    char c[20];

    //printf("Enter Phylum (vertebrado/invertebrado): ");
    scanf("%s", &a);
   // printf("\n\nEnter Class (ave/mamifero/inseto/anelideo): ");
    scanf("%s", &b);
   // printf("\n\nEnter Order (carnivoro/onivoro/''/herbivoro/hematofago/''/''/''): ");
    scanf("%s", &c);

    if (strcmp(a, "vertebrado") == 0)
    {

        if (strcmp(b, "ave") == 0)
        {
            if (strcmp(c, "carnivoro") == 0)
            {
                printf("aguia\n");
            }

            else if (strcmp(c, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }

        else if (strcmp(b, "mamifero") == 0)
        {
            if (strcmp(c, "onivoro") == 0)
            {
                printf("homem\n");
            }

            else if (strcmp(c, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }

    else if (strcmp(a, "invertebrado") == 0)
    {

        if (strcmp(b, "inseto") == 0)
        {
            if (strcmp(c, "hematofago") == 0)
            {
                printf("pulga\n");
            }

            else if (strcmp(c, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }

        else if (strcmp(b, "anelideo") == 0)
        {
            if (strcmp(c, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }

            else if (strcmp(c, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}



/*

In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.



Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

Input Samples	Output Samples
vertebrado
mamifero
onivoro

homem

vertebrado
ave
carnivoro

aguia

invertebrado
anelideo
onivoro

minhoca


*/