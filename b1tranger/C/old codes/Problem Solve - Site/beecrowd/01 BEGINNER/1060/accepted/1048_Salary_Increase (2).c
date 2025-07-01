#include<stdio.h>

int main()
{
    float a,b,c;
    scanf("%f",&a);
    if(a<=400 && a>0)
    {
        b=.15;
        c=a*b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",a+c,c,b*100);
    }
    else if(a<=800 && a>400)
    {
        b=.12;
        c=a*b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",a+c,c,b*100);
    }
    else if(a<=1200 && a>800)
    {
        b=.10;
        c=a*b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",a+c,c,b*100);
    }
    else if(a<=2000 && a>1200)
    {
        b=.07;
        c=a*b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",a+c,c,b*100);
    }
        else if(a>2000)
        {
            b=.04;
            c=a*b;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",a+c,c,b*100);
        }
        return 0;
    }

 /*
 The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	Readjustment Rate
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%


Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"

Input Sample	Output Sample
400.00

Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %

800.01

Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %

2000.00

Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %


 */


