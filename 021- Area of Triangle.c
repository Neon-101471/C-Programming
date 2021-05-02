#include <stdio.h>
int main ()
{
    float base, height;
    float area;

    printf("Give me two floating number: ");
    scanf("%f %f", &base, &height);

    area = (float)1/2 * base * height;
    printf("The result of Triangle is = %.2f\n", area);

    getch ();
}
