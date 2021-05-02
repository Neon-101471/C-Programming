#include <stdio.h>
#include <math.h>
int main ()
{
    int x = 10;

    printf("The new value of x is = %d\n", x++);
    printf("The new value of x is = %d\n", x++);
    printf("The new value of x is = %d\n", ++x);
    printf("The new value of x is = %d\n", x);
    printf("The new value of x is = %d\n", x--);
    printf("The new value of x is = %d\n", --x);

    getch ();
}
