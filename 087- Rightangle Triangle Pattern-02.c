#include <stdio.h>
int main ()
{
    int row, column, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (row = 1; row<=n; row++)
    {
        for (column = 1; column<=row; column++)
        {
            printf("%d\t", row);
        }
        printf("\n");
    }

    getch ();
}
