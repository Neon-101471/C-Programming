#include <stdio.h>
#include <math.h>

int main ()
{
    float radius, area;

    printf("Give me the radius of Circle: ", radius);
    scanf("%f", &radius);

    area = M_PI*radius*radius;

    printf("The area of Circle is = %.2f\n", area);

    getch ();
}
