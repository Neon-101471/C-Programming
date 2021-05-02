#include <stdio.h>
int main ()
{
    long long LastNumber, i, sum = 0;
    printf("The last number of the series: ");
    scanf("%lld", &LastNumber);

    printf(" 1 + 2 + 3 + .......... + %lld ", LastNumber);

    for (i =1; i<=LastNumber; i++)
    {
        sum = sum + i;
    }
    printf(" = %lld\n", sum);
    getch ();
}
