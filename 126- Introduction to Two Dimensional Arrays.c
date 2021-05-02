#include <stdio.h>
int main()
{
    int i,j;
    int A [3] [4] = { {5, 10, 15, 20}, {6, 12, 18, 24}, {7, 14, 21, 28}};

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d\t", A[i] [j]);
        }
        printf("\n");
    }

    getch ();
}

