#include <stdio.h>
#include <math.h>
int main ()
{
    int num;
    printf("Give me a integer number: ");
    scanf("%d", &num);

    if (num%2==0)
        printf("The number you have taken is Even!");
    else
        printf("The number you have taken is Odd!");

    getch ();
}
