#include <stdio.h>
int main ()
{
    int first = 5, second = 8, Lucas, n, count;

    printf("Enter the Range: ");
    scanf("%d", &n);

    printf("The Lucas series are: %d     %d\t", first, second);

    for (count = 3; count <=n; count++)
    {
     Lucas = first + second;

     printf("%d\t", Lucas);
     first = second;
     second = Lucas;

    }

    getch ();
}
