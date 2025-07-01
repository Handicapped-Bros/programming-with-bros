#include <stdio.h>

int main() {
  int N;
  int q1,q2,q3,q4,q5,q6,q7;

  //how to "The input file contains an integer value N (0 < N < 1000000)."
  
  scanf("%d",&N);

  if (N>=0 && N<1000000) {
   printf("%d\n",N);
  q1 = N/100;
   printf("%d nota(s) de R$ 100,00\n",q1);
  q1 = N%100;
  q2 = q1/50;
   printf("%d nota(s) de R$ 50,00\n",q2);
  q2 = q1%50;
  q3 = q2/20;
   printf("%d nota(s) de R$ 20,00\n",q3);
  q3 = q2%20;
  q4 = q3/10;
   printf("%d nota(s) de R$ 10,00\n",q4);
  q4 = q3%10;
  q5 = q4/5;
   printf("%d nota(s) de R$ 5,00\n",q5);
  q5 = q4%5;
  q6 = q5/2;
   printf("%d nota(s) de R$ 2,00\n",q6);
  q6 = q5%2;
  q7 = q6/1;
   printf("%d nota(s) de R$ 1,00\n",q7);
  } 
  else {printf("INVALID INPUT (input must be less than 10,00,000)");}

  
    return 0;
}


/*In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Input Sample	
576
Output Sample
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00


*/

//__________________________________________________________________________________________________________________________________________
//___________________________________________________________[ ALT @Link with loop ]________________________________________________________
// https://www.codeshikhi.com/2020/11/uri-online-judge-1021-banknotes-and-coins-solution-in-c-cpp-cpluscplus-python.html 

/*
#include <stdio.h>
 
int main()
 
{
 
    double n, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
 
    int t = 0, c;
 
    scanf("%lf", &n);
 
    printf("NOTAS:\n");
 
    t = 0;
 
    n+=1e-9;
 
    while (d[t] >= 0.01)
 
    {
 
        c = 0;
 
        while (n >= d[t])
 
        {
 
            n -= d[t];
 
            c++;
 
        }
 
        if (d[t] == 1.0)
 
            printf("MOEDAS:\n");
 
        if (d[t] >= 2.0 )
 
            printf("%d nota(s) de R$ %.2f\n", c, d[t]);
 
        else
 
            printf("%d moeda(s) de R$ %.2f\n", c, d[t]);
 
        t++;
 
    }
 
    return 0;
 
}

*/