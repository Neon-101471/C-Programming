#include <stdio.h>
int main ()
{
    long long LastNumber, i, sum = 0;
    printf("The last number of the series: ");
    scanf("%lld", &LastNumber);

    printf(" 1 + 3 + 5 + .......... + %lld ", LastNumber);

    for (i=1; i<=LastNumber; i=i+2)
    {
        sum = sum + i;
    }
    printf(" = %lld\n", sum);
    getch ();
}

