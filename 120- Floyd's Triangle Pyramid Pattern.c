#include <stdio.h>
int main ()
{
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int count=1;

    printf("\n\n");

    for (row=1; row<=n; row++)
    {
    for (col=1; col<=row; col++)
        {
            printf("%d\t", count++);
        }
        printf("\n");
    }

    getch ();
}
