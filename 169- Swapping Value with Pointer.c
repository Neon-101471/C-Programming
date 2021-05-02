#include <stdio.h>
int main ()

{
    int x=10, y=20;
    int temporary;

    int *pointer1, *pointer2;

    pointer1 = &x;
    pointer2 = &y;

    temporary = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temporary;

    printf("The value of x = %d\n", x);
    printf("The value of y = %d", y);

    getch ();
}
