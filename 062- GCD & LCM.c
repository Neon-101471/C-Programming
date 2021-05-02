#include <stdio.h>
int main ()

{
    int num1, num2, n1, n2, remainder, GCD, LCM;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    while (n2 != 0)
    {
       remainder = n1%n2;
       n1 = n2;
       n2 = remainder;
    }
    LCM = (num1*num2)/n1;
    printf("The GCD is = %d\n", n1);
    printf("The LCM is = %d", LCM);

    getch ();

}
