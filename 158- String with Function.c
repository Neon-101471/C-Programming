#include <stdio.h>

void Neon (char string[])

{
    int i = 0;
    while (string [i] != '\0')
    {
        printf("\t%c\n", string[i]);
        i++;
    }
}

int main ()
{
    char string [] = "Bangladesh";
    Neon (string);

    getch ();
}
