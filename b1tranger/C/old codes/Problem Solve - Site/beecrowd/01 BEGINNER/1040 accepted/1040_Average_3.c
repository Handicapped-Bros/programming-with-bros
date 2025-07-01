/*"weighted average is a different concept than normal average.To calculate a weighted average, one must find the products of each value and its corresponding weight, add all these products together, and then divide this number by the sum of all weights in the data set. The resulting quotient is the weighted average."*/

#include <stdio.h>

int main()
{
    // float N1,N2,N3,N4;
    float N[10], tmp, typed, tmp2;
    float w1 = 2, w2 = 3, w3 = 4, w4 = 1;
    int i;

    for (i = 0; i < 4; i++)
    {
        scanf("%f", &N[i]);
    }

    tmp = (N[0] * w1 + N[1] * w2 + N[2] * w3 + N[3] * w4) / (w1 + w2 + w3 + w4);
    printf("Media: %.1f\n", tmp);
    if (tmp >= 7) // Approved Student
    {
        printf("Aluno aprovado.\n");
    }
    else if (tmp < 5) // Reproved Student
    {
        printf("Aluno reprovado.\n");
    }
    else if (tmp >= 5 && tmp <= 6.9) // In exam student
    {
        printf("Aluno em exame.\n");
        scanf("%f", &typed); // Exam score
        printf("Nota do exame: %.1f\n", typed);
        tmp2 = (tmp + typed) / 2;
        if (tmp2 >= 5)
        {
            printf("Aluno aprovado.\nMedia final: %.1f\n", tmp2);
        }
        else if (tmp2 <= 4.9)
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n", tmp2);
        }
    }

    return 0;
}

/*
Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input
The input contains four floating point numbers that represent the students' grades.

Output
Print all the answers with one digit after the decimal point.

Input Sample	Output Sample
2.0 4.0 7.5 8.0
6.4

Media: 5.4
Aluno em exame.
Nota do exame: 6.4
Aluno aprovado.
Media final: 5.9

2.0 6.5 4.0 9.0

Media: 4.8
Aluno reprovado.

9.0 4.0 8.5 9.0

Media: 7.3
Aluno aprovado.



*/