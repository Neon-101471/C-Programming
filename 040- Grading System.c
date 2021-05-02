#include <stdio.h>
#include <math.h>
int main ()
{
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks>=80)
        printf("The grade is A+");
    else if (marks>=70)
        printf("The grade is A");
    else if (marks>=60)
        printf("The grade is A-");
    else if (marks>=50)
        printf("The grade is B");
    else if (marks>=40)
        printf("The grade is C");
    else if (marks>=33)
        printf("The grade is D");
    else
        printf("Fail");

    getch ();
}
