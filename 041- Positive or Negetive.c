#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int number;
    printf("Enter a integer number: ");
    scanf("%d", &number);

    if (number>0)
        printf("The number you have taken is Positive");
    else if (number<0)
        printf("The number you have taken is Negative");
    else
        printf("The number you have taken is Zero");

    getch ();
}
