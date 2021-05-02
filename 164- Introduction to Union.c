#include <stdio.h>

union person
{
    float Salary1, Salary2;
};

int main ()

{
    union person employee;
    employee.Salary1 = 24;

    printf("Salary1 = %.2f\n", employee.Salary1);
    printf("Salary2 = %.2f\n", employee.Salary2);

    employee.Salary2 = 250.00;

    printf("Salary1 = %.2f\n", employee.Salary1);
    printf("Salary2 = %.2f", employee.Salary2);

    getch ();
}

