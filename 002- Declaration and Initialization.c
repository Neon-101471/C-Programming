#include <stdio.h>
int main ()
{
    int num1;
    float num2;
    double num3;
    char ch;

    num1=10;
    num2=20.5;
    num3=30.101010;
    ch= 'S';

    printf("The integer value is: %d\n", num1);
    printf("The float value is: %f\n",num2);
    printf("The double value is: %lf\n",num3);
    printf("The Character value is: %c", ch);
    getch ();
}
