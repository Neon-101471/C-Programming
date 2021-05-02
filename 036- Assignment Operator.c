#include <stdio.h>
#include <math.h>
int main ()
{
    float x, y, z;
    printf("Give me a number of x, y and z: ");
    scanf("%f %f %f", &x, &y, &z);

    x += 88;
    printf("The result of x is = %.2f\n", x);

    y -= 8;
    printf("The result of y is = %.2f\n", y);

    y /= 1.5;
    printf("The result of y is = %.2f\n", y);

    z *= 88;
    printf("The result of z is = %.2f\n", z);

    getch ();
}

