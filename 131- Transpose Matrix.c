#include <stdio.h>
int main ()
{
    int Matrix[5][5], TransposeMatrix[5][5], i, j, row, col;
    printf("How many row & column do you want to take: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter the value of Matrix: \n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("Matrix [%d][%d]= ", i,j);
            scanf("%d", &Matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nNow Transposing will be organized here: \n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            TransposeMatrix[j][i] = Matrix[i][j];
        }
        printf("\n");
    }

    printf("The Transpose Matrix is =\n\n");

    for (i=0; i<col; i++)
    {
        for (j=0; j<row; j++)
        {
            printf("%d\t", TransposeMatrix[i][j]);
        }
        printf("\n");
    }

    getch ();
}
