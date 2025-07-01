#include <stdio.h>

int main() {
  int N;
  int q1,q2,q3;
  int r1,r2,r3;
  scanf("%d",&N);
  q1=N/3600;
  printf("%d:",q1);
  q1=N%3600;
  q2=q1/60;
  printf("%d:",q2);
  q2=q1%60;
  printf("%d\n",q2);
    return 0;
}

/*Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample	
556
Output Sample
0:9:16


*/