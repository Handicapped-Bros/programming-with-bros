#include <stdio.h>

int main() {
  float A;
  float B;
  float C;
  float MEDIA;
  int w1 = 2;
  int w2 = 3;
  int w3 = 5;
  if(0<A,B,C<10);
  scanf("%f %f %f", &A, &B, &C);
  MEDIA = (A*w1 + B*w2 + C*w3) / (w1 + w2 + w3);
  printf("MEDIA = %.1f\n", MEDIA);
  return 0;
}

/*"weighted average is a different concept than normal average.To calculate a weighted average, one must find the products of each value and its corresponding weight, add all these products together, and then divide this number by the sum of all weights in the data set. The resulting quotient is the weighted average."*/


/*Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

Input Samples	
5.0
6.0
7.0
Output Samples
MEDIA = 6.3


*/