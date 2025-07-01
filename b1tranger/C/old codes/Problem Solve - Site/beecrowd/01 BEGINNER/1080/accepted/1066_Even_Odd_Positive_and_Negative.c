
//https://stackoverflow.com/questions/72940420/how-to-take-a-integer-array-in-a-single-line-input-in-c

#include <stdio.h>


int main()
{
  int num[5];
  int i;
  int even=0,odd=0,positive=0,negative=0;
  scanf("%d%d%d%d%d", &num[0], &num[1],  &num[2], &num[3],  &num[4]);

  for (i=0 ; i<5; i++)
    {
      if(num[i]%2==0)
      {even++;}
      else
      {odd++;}
      //---
      if(num[i]>0) //0 is not positive
      {positive++;}
      else if(num[i]<0)
      {negative++;}
    }

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,positive,negative);

//printf("%d %d %d %d", even, odd, positive, negative);

  return 0;
}

/*
 //shafayet bhai er code

int main()
{
int even=0,odd=0 , pos=o , neg=O;
for (int i=O; i<5; i++) {
int a;
if(a%2==0)even++;
else odd++;
if (a>O)pos++;
else neg++;

printf("%d valor(es) par(es)\n",even);
printf("%d valor(es) impar(es)\n",odd);
printf("%d valor(es) positivo(s)\n",pos);
printf("%d valor(es) negativo(s)\n",neg);

return O;

}

*/






/*
Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.

Input Sample	
-5
0
-3
-4
12

Output Sample
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)

*/


