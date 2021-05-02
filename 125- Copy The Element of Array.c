#include <stdio.h>
int main ()

{
    int Neon [5], Radium [5], i, n;
    printf("How many numbers do you want to take: ");
    scanf("%d", &n);

    printf("\n\nEnter your numbers: ");

    for (i=0; i<n; i++)
    {
        scanf("%d", &Neon[i]);
    }
    printf("Neon: \t");

    for (i=0; i<n; i++)
    {
        printf("%d\t", Neon[i]);
    }

    for (i=0; i<n; i++)
    {
        Radium [i] = Neon [i];
    }
    printf("\nRadium: ");
    for (i=0; i<n; i++)
    {
        printf("%d\t", Radium[i]);
    }
    getch ();
}
