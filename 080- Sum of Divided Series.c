#include <stdio.h>
int main ()
{
    float i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("The sum of\t");

    for (i=1; i<=n; i= i+1)
    {
        sum = sum + (1/i);

        if (i == 1)
            printf("%.2f + ", i);
        else if (i == n)
            printf("(1/%.2f)", n);
        else
            printf("(1/%.2f) + ", i);
    }

    printf("\t = %.2f", sum);
    getch ();

}
