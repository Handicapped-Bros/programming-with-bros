#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int batch;
    float cgpa;
    int number;
    char address[25];
};
int main()
{
    int n,i;
    printf("Enter how many student info want to store:\n");
    scanf("%d",&n);
    struct student student[n];
    for(i=0; i<n; i++)
    {
        printf("Enter student id %d:\n",i);
        printf("Student Name:\n");
        scanf("%s",&student[i].name);
        printf("Student Batch:\n");
        scanf("%d",&student[i].batch);
        printf("Student CGPA:\n");
        scanf("%f",&student[i].cgpa);
        printf("Student Number\n");
        scanf("%d",&student[i].number);
        printf("Student Address:\n");
        scanf("%s",&student[i].address);

    }
    printf("\n\n");

    printf("************student info**********\n");
    for(i=0; i<n; i++)
    {

        printf("Student Name: %s\n",student[i].name);
        printf("Student Batch: %d\n",student[i].batch);
        printf("Student CGPA: %.2f\n",student[i].cgpa);
        printf("Student Name: %d\n",student[i].number);
        printf("Student Name: %s\n",student[i].address);

    }



    return 0;
}
