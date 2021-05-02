#include <stdio.h>
int main ()

{
    int x=10, y=20;
    int sum;

    int *pointer1, *pointer2;
    pointer1 = &x;
    pointer2 = &y;

    sum = *pointer1 + *pointer2;

    printf("The SUM = %d", sum);
    getch ();
}
