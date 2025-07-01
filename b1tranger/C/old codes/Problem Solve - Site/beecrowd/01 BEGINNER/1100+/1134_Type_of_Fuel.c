#include <stdio.h>

int main()
{
int n,alc = 0, gas = 0, die = 0,true = 1;

while(true)
{
    scanf("%d",&n);
    if(n==1)
    {
        alc++;
    }
     else if(n==2)
    {
        gas++;
    }
     else if(n==3)
    {
        die++;
    }
    else if(n==4)
    {
        break;
    }
    else{continue;}

}
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alc,gas,die);

    return 0;
}
