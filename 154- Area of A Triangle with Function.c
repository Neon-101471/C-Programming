#include <stdio.h>

float Area(float a, float b)
{
    return 0.5*a*b;
}

int main()

{
    float base, height;
    printf("Enter the base & height of Triangle: ");
    scanf("%f %f", &base, &height);

    float AreaOfTriangle = Area(base,height);

    printf("The AREA of Triangle = %f\n", AreaOfTriangle);

    getch ();
}
