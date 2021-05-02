#include <stdio.h>
int main ()
{
    int A [3] [4], i, j;

    printf("\nPlease take your array Item: \n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("A[%d][%d]= ", i,j);
            printf("%d\n", A[i][j]);
        }
        printf("\n");
    }

    getch ();
}
