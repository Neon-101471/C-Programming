#include <stdio.h>
#include <math.h>
int main ()

{
    double x;
    double result;

    printf("Give me a value of x: ");
    scanf("%lf", &x);

    result = log (x);
    printf("The result of log(%lf) is = %.2lf\n", x, result);
    result = log10 (x);
    printf("The result of log10(%lf) is = %.2lf\n", x, result);
    result = exp (x);
    printf("The result of exp(%lf) is = %.2lf\n", x, result);
    result = sin (0.10);
    printf("The result of sin(0.10) is = %.2lf", result);

    getch ();
}

