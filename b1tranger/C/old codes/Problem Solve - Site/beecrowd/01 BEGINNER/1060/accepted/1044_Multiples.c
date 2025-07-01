#include <stdio.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(b%a==0 || a%b==0)
{
printf("Sao Multiplos\n");
}
else{printf("Nao sao Multiplos\n");}

    return 0;
}

/*
Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.

Input Sample	Output Sample
6 24

Sao Multiplos

6 25

Nao sao Multiplos

*/