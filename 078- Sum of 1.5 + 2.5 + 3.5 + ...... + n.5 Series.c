#include <stdio.h>
int main ()
{
    int c = 5, i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of 1*5 + 2*5 + 3*5 + ...... + n*5\t ");

    for (i=1; i<=n; i= i+1)
    {
        sum = sum + (i*c);
    }

    printf("= %d", sum);
    getch ();
}
