#include <stdio.h>
int main ()
{
    char lower, upper;
    printf("Give me a lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);
    printf("The converting uppercase letter is: %c ", upper);

    getch ();
}
