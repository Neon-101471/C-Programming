#include <stdio.h>
int main()
{
    int num1, num2;
    int result;

    printf("Give me two number: ");
    scanf("%d %d", &num1, &num2);

    result = num1+num2;
    printf("The summation is = %d\n", result);

    result = num1-num2;
    printf("The subtraction is = %d\n", result);

    result = num1*num2;
    printf("The multiplication is = %d\n", result);

    result = num1/num2;
    printf("The division is = %d\n", result);

    result = num1%num2;
    printf("The reminder is = %d\n", result);

    getch();
}

