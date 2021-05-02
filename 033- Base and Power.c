#include <stdio.h>
#include <math.h>
int main ()

{
    double base,power,result;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the power: ");
    scanf("%lf", &power);

    result = pow (base,power);
    printf("The result is = %.2lf", result);
    getch ();
}

