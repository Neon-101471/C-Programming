#include <stdio.h>
#include <conio.h>
int main ()
{
    int num1;
    float num2;

    printf("Please Taking two values. The first number is integer and another is floating number: \n");
    scanf("%d %f", &num1, &num2);
    printf("The integer number is: %d and the floating number is: %.2f", num1, num2);
    getch ();
}
