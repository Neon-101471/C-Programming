#include <stdio.h>
int main ()
{
    char lower, upper;
    printf("Give me a Uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("The converting lowercase letter is: %c", lower);

    getch ();
}
