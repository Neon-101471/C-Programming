#include <stdio.h>
int main ()
{
    char source[50] = "Man is Mortal.";
    char destination[50];

    strcpy (destination, source);

    printf("The Source string is: %s\n", source);
    printf("The destination string is: %s", destination);

    getch ();
}
