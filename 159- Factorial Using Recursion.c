#include <stdio.h>
int main ()
{
    int Factorial = Fact(5);
    printf("The FACTORIAL of 5 = %d\n", Factorial);

    getch ();
}

int Fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*Fact(n-1);
}
