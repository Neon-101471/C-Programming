#include <stdio.h>
int main ()
{
    float n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("The sum of 1^2 + 2^2 + ...... + n^n");

    for (i=1; i<=n; i= i+1)
    {
        sum = sum + (i*i);
    }

    printf("= %.0f", sum);
    getch ();
}
