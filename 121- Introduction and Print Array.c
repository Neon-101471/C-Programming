#include <stdio.h>
int main ()

{
    int number[5], i;

    printf("Enter 5 numbers: ");

    for (i=0; i<=4; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i=0; i<=4; i++)
    {
        printf("%d\t", number[i]);
    }

    getch ();
}
