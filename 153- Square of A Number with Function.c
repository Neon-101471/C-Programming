#include <stdio.h>

int square(int number)
{
    return number*number;
}

int main ()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    int result = square(number);
    printf("The SQUARE of this number = %d", result);

    getch ();
}
