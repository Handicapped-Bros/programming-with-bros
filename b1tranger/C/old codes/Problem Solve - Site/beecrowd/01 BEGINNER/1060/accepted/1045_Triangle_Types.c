#include <stdio.h>

int main() {
  double A,B,C; //representing the sides of a triangle
  //arranging them in decreasing order
  double s1,s2,s3;

  scanf("%lf %lf %lf", &A,&B,&C);

if(0<A && 0<B && 0<C)
{


  if (A>B){s1=A,s2=B;} else {s1=B,s2=A;}
  if (s2>C){s3=C;} else {s3=s2,s2=C;}
  if (s1>s2){A = s1, B = s2, C = s3;} else {A = s2, B = s1, C = s3;}

  /*
  
  //ALTERNATIVE --> Niloy's code
  
  if(a<b){s=a;a=b;b=s;}
if(a<c){s=a;a=c;c=s;}
if(b<c){s=b;b=c;c=s;}
y=(b*b)+(c*c);
  
  

  //this conditions ain't working!!
  if (A>B && B>C){s1 = A, s2 = B, s3 = C;} 
  else if (A>B && C>A){s1 = C, s2 = A, s3 = B;}
  else if (B>C && C>A){s1 = B, s2 = C, s3 = A;}
  else if (B>A && A>C){s1 = B, s2 = A, s3 = C;}
  else if (C>A && A>B){s1 = C, s2 = A, s3 = B;}
  else if (A>C && C>B){s1 = A, s2 = C, s3 = B;}
  */

  //Keeping A the biggest in the order
  //A = s1, B = s2, C = s3;

//printf("%.1lf %.1lf %.1lf", A,B,C);

  
  //applying the properties of the given 6 conditions
  if(A >= B+C){printf("NAO FORMA TRIANGULO\n");}
  else if((A*A)==(B*B)+(C*C)){printf("TRIANGULO RETANGULO\n");} //can't use single = inside if()
  else if((A*A)>(B*B)+(C*C)){printf("TRIANGULO OBTUSANGULO\n");}
  else if((A*A)<(B*B)+(C*C)){printf("TRIANGULO ACUTANGULO\n");}


  if(A==B && B==C /*&& C==A*/){printf("TRIANGULO EQUILATERO\n");} //this may have been causing the issue. Since I wrote A==B==C at first
  else if(A==B || B==C || A==C){printf("TRIANGULO ISOSCELES\n");}




}

  else {printf("Input must be greater than 0!!");}


  return 0;
}



/* Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.

Input Samples	
7.0 5.0 7.0
Output Samples
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES

6.0 6.0 10.0

TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES

6.0 6.0 6.0

TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO

5.0 7.0 2.0

NAO FORMA TRIANGULO

6.0 8.0 10.0

TRIANGULO RETANGULO 

  */