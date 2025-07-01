#include <stdio.h>

int main()
{
    int a, b, c, d;
    int tmp1, tmp2, tmp3, tmp4, tmp5;
    scanf("%d %d %d %d", &a, &b, &c, &d); // initial hour a, initial minute b, final hour c, final minute d

    if (a == b && b == c && c == a)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if (a <= c && b<=d)
    {
        tmp1 = a * 60 + b; // initials in minutes
        tmp2 = c * 60 + d; // finals in minutes
        tmp3 = tmp2 - tmp1;
        tmp4 = tmp3 / 60;
        tmp5 = tmp3 % 60;
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp4, tmp5);
        }
    }

    else if (a <= c && b>=d)

 {
        tmp1 = a * 60 + d; // initials in minutes
        tmp2 = c * 60 + b; // finals in minutes
        tmp3 = tmp2 - tmp1;
        tmp4 = tmp3 / 60;
        tmp5 = tmp3 % 60;
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp4, tmp5);
        }
    }

else if (a >= c && b<=d)


    {
        tmp1 = a * 60 + d; // initials in minutes
        tmp2 = c * 60 + b; // finals in minutes
        tmp3 = tmp1 - tmp2;
        tmp4 = tmp3 / 60;
        tmp5 = tmp3 % 60;
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp4, tmp5);
        }
    }

else if (a >= c && b>=d)


    {
        tmp1 = a * 60 + b; // initials in minutes
        tmp2 = c * 60 + d; // finals in minutes
        tmp3 = tmp1 - tmp2;
        tmp4 = tmp3 / 60;
        tmp5 = tmp3 % 60;
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp4, tmp5);



        /*

        tmp1 = a*60 + b; //initials in minutes
            tmp2 = (c+12)*60 + d; //finals in minutes
            tmp3 = tmp2 - tmp1;
            tmp4 = tmp3/60;
            tmp5 = tmp3%60;

            */
    }
    }

    return 0;
}
