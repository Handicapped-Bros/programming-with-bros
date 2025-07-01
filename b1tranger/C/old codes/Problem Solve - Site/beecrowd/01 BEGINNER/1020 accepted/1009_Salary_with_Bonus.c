#include <stdio.h>

int main() {
  double TOTAL;
  char NAME;
  double pay;
  double sale;
  scanf("%s", &NAME);
  getchar(); //this is not needed, the issue was %c instead of %s
  
  scanf("%lf", &pay);
  scanf("%lf", &sale);
  TOTAL = (sale * 0.15) + pay;
  printf("TOTAL = R$ %.2lf\n", TOTAL);
  return 0;
}

/*Just add a line getchar(); after printing the newline in line 15 Because that printf("\n") feeds the scanf with a newline character. getchar() skips (eats) the newline character here.*/


/*

Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.

Input Samples	
JOAO
500.00
1230.30
Output Samples
TOTAL = R$ 684.54 */

