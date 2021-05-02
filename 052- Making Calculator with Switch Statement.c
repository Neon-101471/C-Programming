#include <stdio.h>
int main ()
{
    double num1, num2;
    char op;

    printf("You can choose one operator- \n");
    printf("1. plus (+)\n");
    printf("2. minus (-)\n");
    printf("3. into (*)\n");
    printf("4. divided (/)\n");

    printf("Select an operator: \n");
    scanf("%c", &op);

    printf("Give me two number: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+' :
    {
        printf("The summation is = %lf\n", num1+num2);
        break;
    }
    case '-' :
    {
        printf("The subtraction is = %lf\n", num1-num2);
        break;
    }
    case '*' :
    {
        printf("The multiplication is = %lf\n", num1*num2);
        break;
    }
    case '/' :
    {
        printf("The division is = %lf\n", num1/num2);
        break;
    }
    default:
        printf("Sorry! You have choose wrong operator");

    }
    getch ();
}
