#include <stdio.h>
int main ()
{
    int value;
    printf("Give me a ASCII value: ");
    scanf("%d", &value);

    printf("The ASCII character is: %c", value);
    getch ();
}
