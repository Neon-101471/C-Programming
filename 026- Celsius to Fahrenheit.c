#include <stdio.h>
#include <math.h>

int main()
{
    float C, F;
    printf("Give me a Centigrade scale value: ");
    scanf("%f", &C);

    F = 32 + (1.8*C);
    printf("The converting Fahrenheit scale value is = %.2f", F);
    getch ();
}
