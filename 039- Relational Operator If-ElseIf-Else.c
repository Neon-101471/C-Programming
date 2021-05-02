#include <stdio.h>
#include <math.h>
int main ()
{
    float num1, num2;
    printf("Enter a floating number: ");
    scanf("%f", &num1);
    printf("Enter another floating number: ");
    scanf("%f", &num2);

    if (num1>num2)
        printf("The largest number is = %.2f\n", num1);
    else if (num1<num2)
        printf("The largest number is = %.2f\n", num2);
    else
        printf("They are equal number! ");

    getch ();

}
