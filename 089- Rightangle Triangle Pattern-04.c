#include <stdio.h>
#include <math.h>
int main ()

{
    int row, col, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=row; col++)
        {
            printf("%d\t", row%2);
        }
        printf("\n");
    }

    getch ();
}
