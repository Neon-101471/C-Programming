#include <stdio.h>
#include <math.h>
int main ()

{
    int number, result;
    printf("Give me a number: ");
    scanf("%d", &number);

    result = abs(number);
    printf("The absolute value of this number is = %d", result);

    getch ();
}
