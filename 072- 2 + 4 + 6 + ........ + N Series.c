#include <stdio.h>
int main ()
{
    int number, sum = 0, a, n;
    printf("Enter the initial value of the series: ");
    scanf("%d", &a);
    printf("Enter the final value of the series: ");
    scanf("%d", &n);

    printf("%d + 6 +9 + ...... + %d = ", a, n);

    while (a<=n)
    {
        sum = sum + a;
        a = a+3;
    }
    printf("%d", sum);

getch ();
}
