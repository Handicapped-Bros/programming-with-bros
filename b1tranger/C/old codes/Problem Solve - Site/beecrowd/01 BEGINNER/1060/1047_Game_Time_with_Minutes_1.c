#include <stdio.h>

int main()
{
    int IH, IM, FH, FM;
    int tmp1,tmp2,tmp3,tmp4,tmp5,tmp6;
    printf("enter starting time:\nHours: ");
    scanf("%d", &IH);
    printf("Minutes: ");
    scanf("%d", &IM);
    printf("enter ending time:\nHours: ");
    scanf("%d", &FH);
    printf("Minutes: ");
    scanf("%d", &FM);

tmp1 = IH*60+IM;
tmp2 = FH*60+FM;
tmp3 = (IH-FH)*60+(IM-FM);//IH>FH & IM>FM case
tmp4 = (IH-FH)*60+(FM-IM);//IH>FH & IM<FM case
tmp5 = (FH-IH)*60+(FM-IM);//IH<FH & IM<FM case
tmp6 = (FH-IH)*60+(IM-FM);//IH<FH & IM>FM case

if (IH <= 24 && IH >= 0 && FH <= 24 && FH >= 0 && IM <= 60 && IM >= 0 && FM <= 60 && FM >= 0)
    {
        if (IH == FH && IM == FM)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        }
        else if (FH > IH)
        {
            if (FM > IM)
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",tmp5/60,tmp5%60);
            }
            else
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",tmp6/60,tmp6%60);
            }
        }
        else if (FH < IH)
        {
            
            if(FM < IM)
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",tmp3/60,tmp3%60);
            }
            else
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",tmp4/60,tmp4%60);
            }
        }
    }



/*
    if (IH <= 24 && IH >= 0 && FH <= 24 && FH >= 0 && IM <= 60 && IM >= 0 && FM <= 60 && FM >= 0)
    {
        if (IH == FH && IM == FM)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        }
        else if (FH > IH)
        {
            if (FM > IM)
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",FH-IH,FM-IM);
            }
            else
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",FH-IH,IM-FM);
            }
        }
        else if (FH < IH)
        {
            
            if(IH-FH<=1 && FM < IM)
            {printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)",60-(FM-IM));
            }
            else if (FM > IM)
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",(IH-FH)+12,60-(FM-IM));
            }
            else
            {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",(IH-FH)+12,60-(IM-FM));
            }
        }
    }
*/
    else
    {
        printf("Input not Valid! enter in 24hour format and minutes within 60");
    }
    return 0;
}
