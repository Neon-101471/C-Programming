#include <stdio.h>
int main ()
{
    int first = 0, second = 1, Fibonacci, count = 0, n;
    printf("Enter the Range: ");
    scanf("%d", &n);

    printf("The Fibonacci Series are: ");

    for (count = 0; count<n; count++)
    {
        if (count <= 1)
        {
            Fibonacci = count;
        }
        else
        {
            Fibonacci = first + second;
            first = second;
            second = Fibonacci;
        }

        printf("%d\t", Fibonacci);
    }
    getch ();
}
