#include <stdio.h>

int main() {
  float A;
  if(0<A<10);
  float B;
  if(0<B<10);
  float MEDIA;
  scanf("%f %f", &A, &B);
  MEDIA = (A*3.5+B*7.5)/11;
  printf("MEDIA = %.5f\n", MEDIA);
  return 0;
}

/*"weighted average is a different concept than normal average.To calculate a weighted average, one must find the products of each value and its corresponding weight, add all these products together, and then divide this number by the sum of all weights in the data set. The resulting quotient is the weighted average."*/

/*Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.

Input
The input file contains 2 floating points' values with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.

Input Samples	
5.0
7.1
Output Samples
MEDIA = 6.43182

*/