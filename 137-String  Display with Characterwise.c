#include <stdio.h>
int main ()
{
    char Neon[]= "Bangladesh";
    int i=0;

    while (Neon[i] != '\0')
    {
        printf("%c\t", Neon[i]);
        i++;
    }

    getch ();
}
