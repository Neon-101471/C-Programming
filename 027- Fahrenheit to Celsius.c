#include <stdio.h>
#include <math.h>

int main ()
{
    float C, F;

    printf("Give me a Fahrenheit scale value: ");
    scanf("%f", &F);

    C = 0.555555 * (F-32);
    printf("The converting Centigrade scale value is = %.2f", C);
    getch ();
}
