#include <stdio.h>
// #include <math.h>

int main()
{

    float x, y;
    scanf("%f%f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (y == 0)
    // y/x==atan(180) || y/x == atan(0)
    {
        printf("Eixo X\n");
    }
    else if (x == 0)
    // y/x==atan(90) || y/x == atan(270)
    {
        printf("Eixo Y\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4\n");
    }

    return 0;
}

/*

else  if(y/x < atan(90) && y/x > 0)
{
    printf("Q1\n");
}
else if(y/x > atan(90) && y/x > 0)
{
    printf("Q2\n");
}

else if(y/x > atan(180) && y/x < atan(270))
{
    printf("Q3\n");
}
else if(y/x > atan(270) && y/x > 0)
{
    printf("Q4\n");
}

*/


/*

Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).

        |
 [ Q2 ] | [ Q1 ]
________|_________ (x)
        |
 [ Q3 ] | [ Q4 ]
        |
       (y)


If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.

Input Sample	Output Sample
4.5 -2.2

Q4

0.1 0.1

Q1

0.0 0.0

Origem

*/