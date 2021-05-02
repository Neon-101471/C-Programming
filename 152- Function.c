#include <stdio.h>

void sum(int a, int b, int c)
{
    printf("The SUM is = %d\n", a+b+c);
}
void sub(int a, int b)
{
    printf("The SUB is = %d",a-b);
}

int main ()

{
    sum(10,20,30);
    sum(5,10,15);
    sub(20,10);
    getch ();
}
