#include <stdio.h>
int main ()
{
    char Neon[]= "Bangladesh";
    char Radium[]= "Bangladesh";

    int d= strcmp(Neon,Radium);

    if (d==0)
        printf("The strings are equal.");
    else
        printf("The strings are not equal.");

    getch ();
}
