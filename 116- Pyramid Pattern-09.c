#include <stdio.h>
int main ()
{
    int n, row, col;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\n\n");

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n; col++)

        {
            if (row+col==n+1 || col==row)
                printf("*");

            else
                printf(" ");
        }

        printf("\n");
    }

    getch ();
}

