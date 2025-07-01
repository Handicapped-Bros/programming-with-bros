#include <stdio.h>
#include <math.h>

int main() 
{
  double N, x, y;
  double calc1,calc2,calc3,calc4,calc5,calc6;
  double count1,count2,count3,count4,count5,count6;


  scanf("%lf", &N);
  y = modf(N,&x); // x=interger part, y=decimal part

  if (N >= 0 && N <= 1000000.00) {

    /*printf("Seperating the decimals:\n\nbefore decimal is = %.0lf\nafter decimal is = %.2lf\n\n",x,y);*/

    // working with the integer part (x)
    count1 = (int)x/100; calc1 = (int)x%100;
    count2 = (int)calc1/50; calc2 = (int)calc1%50;
    count3 = (int)calc2/20; calc3 = (int)calc2%20;
    count4 = (int)calc3/10; calc4 = (int)calc3%10;
    count5 = (int)calc4/5; calc5 = (int)calc4%5;
    count6 = (int)calc5/2; calc6 = (int)calc5%2;

    printf("NOTAS:\n%.0lf nota(s) de R$ 100.00\n%.0lf nota(s) de R$ 50.00\n%.0lf nota(s) de R$ 20.00\n%.0lf nota(s) de R$ 10.00\n%.0lf nota(s) de R$ 5.00\n%.0lf nota(s) de R$ 2.00\n",count1,count2,count3,count4,count5,count6);

    // working with the decimal part (y)
    count1 =  (int)calc6/1; //forwarding the last result as the starting of coin calculation has integer part
       calc1 = (int)(y*100)%100;  
  
    //Masud,"point gulare 100 diye gun kore korte paro, eita ekta solution"
    count2 = (int)calc1/50; calc2 = (int)calc1%50;
    count3 = (int)calc2/25; calc3 = (int)calc2%25;
    count4 = (int)calc3/10; calc4 = (int)calc3%10;
    count5 = (int)calc4/5; calc5 = (int)calc4%5;
    count6 = (int)calc5/01; //calc6 = (int)calc5%01;

    printf("MOEDAS:\n%.0lf moeda(s) de R$ 1.00\n%.0lf moeda(s) de R$ 0.50\n%.0lf moeda(s) de R$ 0.25\n%.0lf moeda(s) de R$ 0.10\n%.0lf moeda(s) de R$ 0.05\n%.0lf moeda(s) de R$ 0.01\n",count1,count2,count3,count4,count5,count6);

    //.25 ar .05 erta genjam. doesn't show the expected result at Beecrowd. 
    //Masud,"Implicit conversion is what you are looking for. point gulare 100 diye gun kore korte paro, eita ekta solution"
    // See https://www.geeksforgeeks.org/implicit-type-conversion-in-c-with-examples/ or https://youtu.be/uajWePMMs84?si=hdceWE4SmniXCqIs 

  }
else {printf("INVALID INPUT (input must be less than 10,00,000)");}
 return 0;
}

/*
TMP reults don't always match

count1 = [why not put (int) here?] (y*100)/100; calc1 = (int)(y*100)%100;  
count2 = (int)calc1/50; calc2 = (int)calc1%50;
count3 = (int)calc2/25; calc3 = (int)calc2%25;
count4 = (int)calc3/10; calc4 = (int)calc3%10;
count5 = (int)calc4/5; calc5 = (int)calc4%5;
count6 = (int)calc5/01; calc6 = (int)calc5%01;*/


/*
TMP wasn't getting desired results


count1 = (float)y/1; calc1 = fmod((float)y,1);
count2 = (float)calc1/.50; calc2 = fmod((float)calc1,.50);
count3 = (float)calc2/.25; calc3 = fmod((float)calc2,.25);
count4 = (float)calc3/.10; calc4 = fmod((float)calc3,.10);
count5 = (float)calc4/.05; calc5 = fmod((float)calc4,.05);
count6 = (float)calc5/.01; calc6 = fmod((float)calc5,.01);*/


//_______________________________________________________________________________________________________________________________________

/*
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

//_______________________________________________________________________________________________________________________________________

  576.73

  NOTAS:
  5 nota(s) de R$ 100.00
  1 nota(s) de R$ 50.00
  1 nota(s) de R$ 20.00
  0 nota(s) de R$ 10.00
  1 nota(s) de R$ 5.00
  0 nota(s) de R$ 2.00
  MOEDAS:
  1 moeda(s) de R$ 1.00
  1 moeda(s) de R$ 0.50
  0 moeda(s) de R$ 0.25
  2 moeda(s) de R$ 0.10
  0 moeda(s) de R$ 0.05
  3 moeda(s) de R$ 0.01

//_______________________________________________________________________________________________________________________________________

  91.01

  NOTAS:
  0 nota(s) de R$ 100.00
  1 nota(s) de R$ 50.00
  2 nota(s) de R$ 20.00
  0 nota(s) de R$ 10.00
  0 nota(s) de R$ 5.00
  0 nota(s) de R$ 2.00
  MOEDAS:
  1 moeda(s) de R$ 1.00
  0 moeda(s) de R$ 0.50
  0 moeda(s) de R$ 0.25
  0 moeda(s) de R$ 0.10
  0 moeda(s) de R$ 0.05
  1 moeda(s) de R$ 0.01
*/