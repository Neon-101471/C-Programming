#include <stdio.h>

struct person
{
    char Name[20];
    int Age;
    float Salary;
};

void display (struct person per)
{
    printf("\n\nName: %s\n", per.Name);
    printf("Age: %d\n", per.Age);
    printf("Salary: %.2f\n", per.Salary);
}

int main ()

{
    struct person employee;
    strcpy(employee.Name, "Saif Uddin Ahmed");
    employee.Age = 24;
    employee.Salary = 250.00;
    display(employee);

    getch ();
}
