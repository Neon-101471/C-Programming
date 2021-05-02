#include <stdio.h>
int main ()
{
    float r, result;
    printf("Give me the radius of the Circle: ");
    scanf("%f", &r);

    result = 3.1416*r*r;
    printf("The area of the Circle = %.2f", result);

    getch ();
}
