#include <stdio.h>
#include <conio.h>
int main ()
{
    char a;
    int b;
    float c;
    double d;

    printf("The size of character is: %d\n", sizeof(a));
    printf("The size of integer is: %d\n", sizeof(b));
    printf("The size of floating is: %d\n", sizeof(c));
    printf("The size of double is: %d", sizeof(d));

    getch ();
}
