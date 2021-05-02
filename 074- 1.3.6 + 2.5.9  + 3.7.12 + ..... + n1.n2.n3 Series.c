#include <stdio.h>
int main ()
{
    int sum = 0, a = 1, b = 3, c = 6;
    int n1, n2, n3;

    printf("Enter the value of n1, n2 and n3: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("1*3*6 + 2*5*9 + 3*7*12 + ...... + %d*%d*%d = ", n1, n2, n3);

    while (a<=n1 && b<=n2 && c<=n3)
    {
        sum = sum + (a*b*c);
        a = a + 1;
        b = b + 2;
        c = c + 3;
    }
    printf("%d", sum);
    getch ();
}
