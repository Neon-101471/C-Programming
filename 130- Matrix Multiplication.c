#include <stdio.h>
int main ()
{
    int First[5][5], Second[5][5], Result[5][5], row1, row2, col1, col2, i,j,k, sum = 0;

    printf("Enter the row & column for First matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the row & column for Second matrix: ");
    scanf("%d %d", &row2, &col2);

    while (col1 != row2)
    {
        printf("\nError Something! col1 & row2 is not equal.\n");
        printf("Enter the row & column for First matrix: ");
        scanf("%d %d", &row1, &col1);

        printf("Enter the row & column for Second matrix: ");
        scanf("%d %d", &row2, &col2);

    }
    printf("\nEnter the value of First matrix: \n\n");
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col1; j++)
        {
            printf("First[%d][%d] =", i,j);
            scanf("%d", &First[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the value of Second matrix: \n\n");
    for (i=0; i<row2; i++)
    {
        for (j=0; j<col2; j++)
        {
            printf("Second[%d][%d] =", i,j);
            scanf("%d", &Second[i][j]);
        }
        printf("\n");
    }

    printf("Now Multiply the Two Matrix! \n");

    for (i=0; i<row1; i++)
    {
        for (j=0; j<col2; j++)
        {
            for (k=0; k<col1; k++)
            {
                sum = sum + First[i][k] * Second[k][j];

            }
            Result[i][j] = sum;
            sum = 0;
        }
    }

    printf("The Result matrix is: \n\n");

    for (i=0; i<row1; i++)
    {
        for (j=0; j<col2; j++)
        {
            printf("\t%d\t", Result[i][j]);
        }
        printf("\n");
    }

    getch ();
}
