#include <stdio.h>
#include <math.h>
int main ()

{
    double number, result;
    printf("Give me a number: ");
    scanf("%lf", &number);

    result = sqrt (number);
    printf("The square root result is = %.2lf ", result);

    getch ();
}
