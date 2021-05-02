#include <stdio.h>
#include <math.h>

int main ()
{
    double length, height, area;

    printf("Give me the length of a Triangle: ");
    scanf("%lf", &length);
    printf("Give me the height of a Triangle: ");
    scanf("%lf", &height);

    area = length * height;

    printf("The area of Triangle is = %.2lf", area);

    getch ();
}
