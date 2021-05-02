#include <stdio.h>
#include <math.h>
int main ()

{
    double a,b,c,D,x1,x2;
    printf("Give me the value of a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = sqrt (b*b-4*a*c);

    x1 = (-b+D)/(2*a);
    x2 = (-b-D)/(2*a);

    printf("The value of x1 is = %.2lf\n", x1);
    printf("The value of x2 is = %.2lf", x2);

    getch ();
}
