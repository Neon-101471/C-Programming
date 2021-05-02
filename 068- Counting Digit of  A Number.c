#include <stdio.h>
int main ()
{
    long long num, r, count = 0;
    printf("Enter any positive integer: ");
    scanf("%lld", &num);

    while (num != 0)
    {
        r = num%10;
        ++count;
        num = num/10;
    }
    printf("The number of digits of positive integer is = %d ", count);

    getch ();
}
