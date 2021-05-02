#include <stdio.h>
int main ()
{
    int i, number, Factorial = 1;

    printf("Enter the positive value of : ");
    scanf("%d", &number);

    for (i=1; i<=number; i++)
    {
        Factorial = Factorial * i;
    }
    printf("The Factorial of %d is = %d\n", number, Factorial);
    getch ();
}
