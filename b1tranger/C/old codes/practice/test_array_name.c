#include <stdio.h>


int main()
{
   

char lineINPUT[30]; //this is an array
  fgets(lineINPUT, sizeof(lineINPUT), stdin); //function for string

   
   
printf("Hello, World!\n%s\n", lineINPUT);


return 0;
}



/*

//limitation here is that you must take 3 word inputs, 
//if you name consists of 2 words, output won't show, but wait for another input

char a[10]; char b[10]; char c[10];
scanf("%s %s %s", &a, &b, &c);
printf("\n\nYour said your name was %s %s %s\n\n",a,b,c);

*/


