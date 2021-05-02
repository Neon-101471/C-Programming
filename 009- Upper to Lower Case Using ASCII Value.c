#include <stdio.h>
int main ()
{
    char upper;
    printf("Give me a Uppercase letter: ");
    scanf("%c", &upper);

    printf("The converting Lowercase letter is: %c", upper+32);

    getch ();
}
