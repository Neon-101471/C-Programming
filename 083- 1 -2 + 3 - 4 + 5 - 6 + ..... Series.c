/* 1 - 2 + 3 - 4 + 5 - .......... + n
 = (1+3+5+ ....) - (2+4+6+.....)*/

#include <stdio.h>
int main ()

{
    int n, i, Even = 0, Odd = 0, Result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
            Even = Even + i;
        else
            Odd = Odd + i;
    }

    Result = Odd - Even;
    printf("The Sum is = %d ", Result);

    getch ();
}
