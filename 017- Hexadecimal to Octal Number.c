#include <stdio.h>
int main()
{
    int number;
    printf("Give me a Hexadecimal number: ");
    scanf("%x", &number);

    printf("The converting Octal number is: %o", number);

    getch();
}

