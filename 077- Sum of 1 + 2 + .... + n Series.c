#include <stdio.h>
int main ()

{
    float i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("The Sum of 1 + 2 + 3 + ...... + n\t");

    for (i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }

    printf("= %.2f", sum);
    getch ();
}

