#include <stdio.h>
int main ()
{
    char Neon[50]= "Bangladesh is A ";
    char Radium[]= "Muslim Country.";

    int i=0, length=0, j=0;

    while (Neon[i] != '\0')
    {
        i++;
        length++;
    }

    while (Radium[j] != '\0')
    {
        Neon[length+j] = Radium[j];
        j++;
    }

    printf("The string is: %s", Neon);
    getch ();
}
