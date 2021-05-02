#include <stdio.h>
int main ()
{
    int num1, num2, large;

    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);

    large = (num1>num2) ? num1 : num2;

    printf("The Large number is: %d", large);

    getch ();
}
