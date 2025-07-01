#include <stdio.h>

int main() {
  int a,b,c,X;
  scanf("%d %d %d",&a,&b,&c);
  if (a>b){X = a;}
  else {X = b;}
  if (X>c){printf("%d eh o maior\n", X);}
  else {printf("%d eh o maior\n", c);}
return 0;
}

// ALTERNATIVE

/*
#include <stdio.h>
#include <math.h> //you need math function for Abs() I guess

int main() {
int a,b,c,X,Y;
scanf("%d %d %d",&a,&b,&c);
X = (a+b+(abs(a-b)))/2; //Abs mane hocche absolute num
Y = (X+c+(abs(X-c)))/2;
printf("%d eh o maior\n", Y);
return 0;
}
*/



/*Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	
7 14 106
Output Samples
106 eh o maior

*/