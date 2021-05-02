#include <stdio.h>
int main ()
{
    int A [3][4], B [3][4], i, j;
    printf("Enter the value of A: \n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("The matrix A = \n");

    for (i=0; i<3; i++)
    {
        printf("\t\t");
        for (j=0; j<4; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the value of B: \n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("B [%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("The matrix B = \n");

    for (i=0; i<3; i++)
    {
        printf("\t\t");
        for (j=0; j<4; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    getch ();
}
