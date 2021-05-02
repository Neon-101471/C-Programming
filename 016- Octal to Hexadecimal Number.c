#include <stdio.h>
int main()
{
    int number;
    printf("Give me a Octal number: ");
    scanf("%o", &number);

    printf("The converting Hexadecimal number is: %x", number);

    getch();
}
