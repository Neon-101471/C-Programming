#include <stdio.h>
int main ()
{
    int n, row, col;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (row = n; row>=1; row--)
    {
        for (col = 1; col<=n-row; col++)
        {
            printf(" \t");
        }
        for (col = 1; col<=row; col++)
        {
            printf("%d\t", row%2);
        }
        printf("\n");
    }

    getch ();
}
