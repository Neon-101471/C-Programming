#include <stdio.h>
int main ()

struct person
{
    char name[20];
    int age;
    float salary;
};

{
    struct person Employee[3];
    int i;

    for (i=0; i<2; i++)
    {
        printf("\n\nEnter the information of Employee %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(Employee[i].name);
        printf("Enter Age: ");
        scanf("%d", &Employee[i].age);
        printf("Enter The Salary: ");
        scanf("%f", &Employee[i].salary);
    }

    for (i=0; i<2; i++)
    {
        printf("\n\nThe information of Employee %d\n",i+1);
        printf("NAME = %s\n", Employee[i].name);
        printf("AGE =  %d\n", Employee[i].age);
        printf("SALARY = %.2f \n", Employee[i].salary);
    }

    getch ();
}
