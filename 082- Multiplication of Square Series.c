#include <stdio.h>
int main ()
{
    int a, n, result = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The multiplication of 1^2 * 2^2 * 3^2 * ...... * n^2 = ");

    for (a=1; a<=n; a= a+1)
    {
        result = result * (a*a);
    }

    printf("\t %d", result);
    getch ();
}
