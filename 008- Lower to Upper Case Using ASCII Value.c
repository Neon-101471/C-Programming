#include <stdio.h>
int main ()
{
    char lower;
    printf("Give me a lowercase letter: ");
    scanf("%c", &lower);

    printf("The converting Uppercase letter is: %c", lower-32);
    getch ();
}
