#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, root1, root2, R1, R2;
  scanf("%lf %lf %lf", &a, &b, &c);
  // a*x^2+b*x+c=0 --> x=(-b±√(b^2-4*a*c))/2*a

root1 = b * b - 4 * a * c;
root2 = b * b - 4 * a * c;

  if (a > 0 && root1 >= 0 && root2) {
    R1 = (-b + sqrt((double)root1)) / (2*a);
    R2 = (-b - sqrt((double)root2)) / (2*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
  } else {
    printf("Impossivel calcular\n");
  }

  return 0;
}

/*
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

Input Samples	Output Samples
10.0 20.1 5.1

R1 = -0.29788
R2 = -1.71212

0.0 20.0 5.0

Impossivel calcular

10.3 203.0 5.0

R1 = -0.02466
R2 = -19.68408

10.0 3.0 5.0

Impossivel calcular




*/


