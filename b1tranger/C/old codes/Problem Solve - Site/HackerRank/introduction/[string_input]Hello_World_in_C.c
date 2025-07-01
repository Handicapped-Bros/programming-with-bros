#include <stdio.h>

int main() 
{

    char lineINPUT[30]; //this is an array
  fgets(lineINPUT, sizeof(lineINPUT), stdin); //function for string
  
  //the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). That's why, when working with strings, we often use the fgets() function instead of scanf() to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
    printf("Hello, World!\n%s\n", lineINPUT);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


/*Objective

In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

Task

This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

Example

The required output is:

Hello, World!  
Life is beautiful  
Function Descriptio

Complete the main() function below.

The main() function has the following input:

string s: a string
Prints

*two strings: * "Hello, World!" on one line and the input string on the next line.
Input Format

There is one line of text, .

Sample Input 0

Welcome to C programming.
Sample Output 0

Hello, World!
Welcome to C programming.*/

