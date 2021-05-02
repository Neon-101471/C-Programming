#include <stdio.h>
int main()
{
    int number;
    printf("Give me a Octal number: ");
    scanf("%o", &number);

    printf("The converting Decimal number is: %d", number);

    getch();
}
