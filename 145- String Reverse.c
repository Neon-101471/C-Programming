#include <stdio.h>
int main ()
{
    char Neon[]= "level";
    printf("The current string is: %s\n\n", Neon);

    strrev(Neon);
    printf("The reverse string is: %s", Neon);

    getch ();
}
