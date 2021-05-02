#include <stdio.h>
int main ()
{
    int i, n, result = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The multiplication of 1 * 2 * 3 * ...... * n =");

    for (i=1; i<=n; i= i+1)
    {
        result = result * i;
    }

    printf("\t %d", result);
    getch ();
}
