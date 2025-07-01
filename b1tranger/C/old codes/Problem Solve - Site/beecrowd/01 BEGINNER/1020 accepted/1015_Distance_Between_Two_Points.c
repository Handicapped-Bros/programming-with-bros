#include <stdio.h>

int main() {
  double x1,y1,x2,y2,Distance;
  scanf("%lf %lf",&x1,&y1);
  scanf("%lf %lf",&x2,&y2);
  Distance = pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
  printf("%.4lf\n",Distance);
    return 0;
}

//To find the square root of a number, use the sqrt() function. The pow() function returns the value of x to the power of y.

/*Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

Distance =  ((x2-x1)^2+(y2-y1)^2)^0.5

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.

Input Sample	
1.0 7.0
5.0 9.0
Output Sample
4.4721


*/