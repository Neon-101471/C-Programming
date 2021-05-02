#include <stdio.h>
int main ()
{
    int Matrix[5][5], i, j, row, col, UpperTriangle = 0, LowerTriangle = 0;
    printf("How many row and column do you want to take: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter the value of Matrix: \n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("Matrix [%d][%d] = ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
        printf("\n");
    }
    printf("The Matrix are as follows: \n\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }


    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i<j)
            {
                LowerTriangle = LowerTriangle + Matrix[i][j];
            }
            else if (i>j)
            {
                UpperTriangle = UpperTriangle + Matrix[i][j];
            }

        }
        printf("\n");
    }
    printf("The sum of LowerTriangle = %d\n", LowerTriangle);
    printf("The sum of UpperTriangle = %d", UpperTriangle);
    getch ();
}
