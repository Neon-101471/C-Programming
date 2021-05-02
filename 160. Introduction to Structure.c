#include <stdio.h>
struct person
{
    int age;
    float salary;
};

int main ()

{
    struct person person1, person2, person3;

    person1.age = 24;
    person1.salary = 250.00;

    printf("AGE1 = %d\n", person1.age);
    printf("SALARY1 = %.2f\n", person1.salary);

    getch ();
}
