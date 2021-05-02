#include <stdio.h>

void calculate(double base, double power)
{
    double result=1, i;
    for(i=1; i<=power; i++)
    {
        result = result * base;
    }
    printf("The RESULT is = %.2lf", result);
}

int main ()
{
    double base, power;
    printf("Enter the value of Base & Power: ");
    scanf("%lf %lf", &base, &power);

    calculate(base,power);

    getch ();
}
