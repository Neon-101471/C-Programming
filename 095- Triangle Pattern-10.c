#include <stdio.h>
int main ()
{
    int row, col, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    /*
            If the value of n is Even, all the elements
            of the first row will  be zero. For the odd
            value of n, all  elements  of the first row
            will be one.
    */

    for (row = n; row>=1; row--)
    {
        for (col = 1; col<=row; col++)
        {
            printf("%d\t", row%2);
        }
        printf("\n\n");
    }

    getch ();
}
