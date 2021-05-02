#include <stdio.h>
int main ()
{
    int A[5][5], B[5][5], C[5][5], row, col, i, j;

    printf("How many row and column do you want to take: \n");
    scanf("%d %d", &row, &col);
    printf("\nEnter the elements of A: \n\n");

  for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter the element of B: \n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("B [%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nThe matrix A = \n");

    for (i=0; i<row; i++)
    {
        printf("\t\t");
        for (j=0; j<col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix B = \n");

    for (i=0; i<row; i++)
    {
        printf("\t\t");
        for (j=0; j<col; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<row; i++)
    {
        printf("\t\t");
        for (j=0; j<col; j++)
        {
            C [i] [j] = A [i] [j] + B [i] [j];
        }
        printf("\n");
    }

      printf("\nThe matrix A+B = \n");

    for (i=0; i<row; i++)
    {
        printf("\t\t");
        for (j=0; j<col; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }


    getch ();
}
