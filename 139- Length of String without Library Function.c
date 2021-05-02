#include <stdio.h>
int main ()
{
    char Neon[]= "The only place where success comes before work is in the dictionary";
    int i=0;
    int length=0;

    while (Neon[i] != '\0')
    {
        i++;
        length++;
    }

    printf("The length of string of Neon = %d", length);
    getch ();
}
