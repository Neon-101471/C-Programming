#include <stdio.h>

void swapping (int *x1, int *y1)
{
    int temp;

    temp = *x1;
    *x1 = *y1;
    *y1 = temp;
}

int main ()
{
    int x = 10;
    int y = 20;

    printf("After swapping x = %d\n", x);
    printf("After swapping y = %d\n", y);

    swapping (&x, &y);

    printf("\n\nBefore swapping x = %d\n", x);
    printf("Before swapping y = %d", y);

    getch ();
}
