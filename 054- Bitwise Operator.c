#include <stdio.h>
int main()
{
    int a, b, result;
    printf("Enter two integer number: ");
    scanf("%d %d", &a, &b);

    result = a&b;
    printf("The result is = %d\n", result);

    result = a|b;
    printf("The result is = %d\n", result);

    result = a^b;
    printf("The result is = %d\n", result);

    getch ();
}
