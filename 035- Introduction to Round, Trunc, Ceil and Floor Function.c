#include <stdio.h>
#include <math.h>
int main ()
{
    double x, result;
    printf("Give me a value of x: ");
    scanf("%lf", &x);

    result = round (x);
    printf("The result of round (%lf) is = %lf\n", x, result);

    result = trunc (x);
    printf("The result of trunc (%lf) is = %lf\n", x, result);

    result = ceil (x);
    printf("The result of ceil (%lf) is = %lf\n", x, result);

    result = floor (x);
    printf("The result of floor (%lf) is = %lf\n", x, result);

    getch ();
}
