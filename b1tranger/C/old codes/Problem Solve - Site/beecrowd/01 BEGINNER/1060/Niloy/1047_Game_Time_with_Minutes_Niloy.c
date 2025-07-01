#include <stdio.h>
int main()
{
int sh,sm,eh,em,hour,min;
scanf("%d%d%d%d",&sh,&sm,&eh,&em);
if(eh>sh&&em>sm){
hour=eh-sh;
min=em-sm;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh==sh&&em==sm){
hour=24+(eh-sh);
min=em-sm;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh>sh&&em<sm){
hour=(eh-1)-sh;
min=(em+60)-sm;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh<sh&&em<sm){
hour=((eh+23)-sh);
min=((em+60)-sm);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh==sh&&em<sm){
hour=(eh+23)-sh;
min=((em+60)-sm);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh<sh&&em==sm){
hour=(eh+24)-sh;
min=(em-sm);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh>sh&&em==sm){
hour=(eh-sh);
min=(em-sm);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}

else if(eh==sh&&em>sm){
hour=(eh-sh);
min=(em-sm);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);}


return 0;
}