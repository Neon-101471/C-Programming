#include <stdio.h>
int main ()
{
    int n, row, col;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=n; col++)
        {
            printf("Bangladesh\t");
        }
        printf("\n");
    }

    getch ();
}

